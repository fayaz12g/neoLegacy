#pragma once
#include "EntityRenderer.h"

class BoatRenderer : public EntityRenderer
{
private:
	static ResourceLocation BOAT_LOCATION_OAK;
	static ResourceLocation BOAT_LOCATION_ACACIA;
	static ResourceLocation BOAT_LOCATION_BIRCH;
	static ResourceLocation BOAT_LOCATION_JUNGLE;
	static ResourceLocation BOAT_LOCATION_DARKOAK;
	static ResourceLocation BOAT_LOCATION_SPRUCE;

protected:
	Model *model;
public:
	BoatRenderer();

    virtual void render(shared_ptr<Entity> boat, double x, double y, double z, float rot, float a);
	virtual ResourceLocation *getTextureLocation(shared_ptr<Entity> mob);
};