#include "WildEncounterManager.hpp"
#include "Pokemon.hpp"
#include <cstdlib> 
#include <ctime>
#include <string>
#include "grass.hpp"

WildEncounterManager::WildEncounterManager()
{
    srand(time(0)); 
}

//const Pokemon& WildEncounterManager::getRandomPokemonFromGrass(const Grass &grass) 
Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass)
{
    int randomIndex = rand() % grass.wildPokemonList.size();
    Pokemon WildPokemon = grass.wildPokemonList[randomIndex];
    return WildPokemon;
}