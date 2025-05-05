#pragma once
class Player;
#include "../../include/Pokemon/grass.hpp"
namespace N_Main
{
    class Game
    {
    public:
        Game();
        void gameLoop(Player& p);
    private:
        Grass shallowWater;
        Grass forestGrass;
        Grass caveGrass;

    };
}