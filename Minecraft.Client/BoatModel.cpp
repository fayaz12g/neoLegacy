#include "stdafx.h"
#include "BoatModel.h"

BoatModel::BoatModel() : Model()
{
texWidth = 128;
texHeight = 64;

cubes[0] = new ModelPart(this, 0, 0);
cubes[1] = new ModelPart(this, 0, 19);
cubes[2] = new ModelPart(this, 0, 27);
cubes[3] = new ModelPart(this, 0, 35);
cubes[4] = new ModelPart(this, 0, 43);

cubes[0]->addBox(-14.0f, -9.0f, -3.0f, 28, 16, 3, 0);
cubes[0]->setPos(0, 3, 1);
cubes[0]->xRot = PI / 2;

cubes[1]->addBox(-13.0f, -7.0f, -1.0f, 18, 6, 2, 0);
cubes[1]->setPos(-15, 4, 4);
cubes[1]->yRot = PI / 2 * 3;

cubes[2]->addBox(-8.0f, -7.0f, -1.0f, 16, 6, 2, 0);
cubes[2]->setPos(15, 4, 0);
cubes[2]->yRot = PI / 2 * 1;

cubes[3]->addBox(-14.0f, -7.0f, -1.0f, 28, 6, 2, 0);
cubes[3]->setPos(0, 4, -9);
cubes[3]->yRot = PI / 2 * 2;

cubes[4]->addBox(-14.0f, -7.0f, -1.0f, 28, 6, 2, 0);
cubes[4]->setPos(0, 4, 9);

paddles[0] = new ModelPart(this, 62, 0);
paddles[0]->addBox(-1.0f, 0.0f, -5.0f, 2, 2, 18, 0);
paddles[0]->addBox(-1.001f, -3.0f, 8.0f, 1, 6, 7, 0);
paddles[0]->setPos(3.0f, -5.0f, 9.0f);
paddles[0]->zRot = PI / 16;

paddles[1] = new ModelPart(this, 62, 20);
paddles[1]->addBox(-1.0f, 0.0f, -5.0f, 2, 2, 18, 0);
paddles[1]->addBox(0.001f, -3.0f, 8.0f, 1, 6, 7, 0);
paddles[1]->setPos(3.0f, -5.0f, -9.0f);
paddles[1]->yRot = PI;
	paddles[1]->zRot = PI / 16;

waterPatch = new ModelPart(this, 0, 0);
waterPatch->addBox(-14.0f, -9.0f, -3.0f, 28, 16, 3, 0);
waterPatch->setPos(0, -3, 1);
waterPatch->xRot = PI / 2;

for (int i = 0; i < 5; i++) cubes[i]->compile(1.0f / 16.0f);
paddles[0]->compile(1.0f / 16.0f);
paddles[1]->compile(1.0f / 16.0f);
waterPatch->compile(1.0f / 16.0f);
}

void BoatModel::render(shared_ptr<Entity> entity, float time, float r, float bob, float yRot, float xRot, float scale, bool usecompiled)
{
for (int i = 0; i < 5; i++)
{
cubes[i]->render(scale, usecompiled);
}
paddles[0]->render(scale, usecompiled);
paddles[1]->render(scale, usecompiled);
}

