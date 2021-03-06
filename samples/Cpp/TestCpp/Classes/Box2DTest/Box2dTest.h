#ifndef _BOX2D_TEST_H_
#define _BOX2D_TEST_H_

#include "cocos2d.h"
#include "Box2D/Box2D.h"
#include "../testBasic.h"

class Box2DTestLayer : public Layer
{
    Texture2D* _spriteTexture;    // weak ref
    b2World* world;
//    GLESDebugDraw* _debugDraw;

public:
    Box2DTestLayer();
    ~Box2DTestLayer();

    void initPhysics();
    void createResetButton();
    virtual void draw();

    void addNewSpriteAtPosition(Point p);
    void update(float dt);
    void onTouchesEnded(const std::vector<Touch*>& touches, Event* event);

    //CREATE_NODE(Box2DTestLayer);
} ;

class Box2DTestScene : public TestScene
{
public:
    virtual void runThisTest();
};

#endif
