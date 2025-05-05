#pragma once
class Player;
#include "../../include/Pokemon/grass.hpp"
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
