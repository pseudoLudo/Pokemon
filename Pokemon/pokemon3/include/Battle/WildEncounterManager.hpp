#pragma once
#include <string>
#include <vector>
#include "../../include/Pokemon/grass.hpp"

struct Grass;
class Pokemon;

class WildEncounterManager 
{
    public:
    WildEncounterManager();
    //const Pokemon& getRandomPokemonFromGrass(const Grass& grass);
    Pokemon getRandomPokemonFromGrass(const Grass& grass);
};