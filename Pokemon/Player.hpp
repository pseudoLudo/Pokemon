#include"PokemonType.hpp"
#include"PokemonChoice.hpp"
#include "Utility.hpp"
#include<string>
#include<limits>
#include<iostream>

using namespace std;


class Player
{
    public:
    string player_name;
    Pokemon p_chosenPokemon;

    Player();
    Player(string p_name, Pokemon p_type);
    void choosePokemon(int choice);
}