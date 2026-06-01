#pragma once
#include "Model.h"
#include "ModelPart.h"

class BoatModel : public Model
{
public:
    ModelPart *cubes[5];
    ModelPart *paddles[2];
    ModelPart *waterPatch;
    BoatModel();
    virtual void render(shared_ptr<Entity> entity, float time, float r, float bob, float yRot, float xRot, float scale, bool usecompiled);
};