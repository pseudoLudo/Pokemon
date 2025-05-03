#pragma once
class Player;
#include "Grass.hpp"
class Game
{
    public:
    Game();
    void gameLoop(Player &p);
    private:
    Grass shallowWater;
	Grass forestGrass;
	Grass caveGrass;
	
};
