#pragma once
#include <string>
#include <vector>
#include "Grass.hpp"

struct Grass;
class Pokemon;

class WildEncounterManager 
{
    public:
    WildEncounterManager();
    //const Pokemon& getRandomPokemonFromGrass(const Grass& grass);
    Pokemon getRandomPokemonFromGrass(const Grass& grass);
};