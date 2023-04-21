#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "../include/renderObject.h"
#include "../include/physicsObject.h"
#include "../include/keyboard.h"


typedef struct Player
{
    RenderObject* render;
    PhysicsObject* physics;
    KeyboardStates keyInputs;
    int amountOfJumpsLeft;
    //  add more
} Player;

void handlePlayerInputs(Player* player);

void handlePlayerAnimation(Player* player);

#endif