#pragma once
#include <string>
#include <vector>
#include "../../include/Pokemon/grass.hpp"

namespace N_Battle
{
    struct Grass;
    class Pokemon;

    class WildEncounterManager
    {
    public:
        WildEncounterManager();
        //const Pokemon& getRandomPokemonFromGrass(const Grass& grass);
        Pokemon getRandomPokemonFromGrass(const Grass& grass);
    };
}