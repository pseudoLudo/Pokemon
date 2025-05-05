#pragma once
#include<string>
#include<vector> 
#include"../../include/Pokemon/Pokemon.hpp"


using namespace std;

namespace N_Pokemon
{
    struct Grass
    {
        string environmentType;
        vector<Pokemon> wildPokemonList;
        int encounterRate;
    };
}