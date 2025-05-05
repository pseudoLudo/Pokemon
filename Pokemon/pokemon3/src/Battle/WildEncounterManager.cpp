#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include <cstdlib> 
#include <ctime>
#include <string>
#include "../../include/Pokemon/grass.hpp"

namespace N_Battle
{
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
}