#include<string>
#include<limits>
#include<iostream>
#include "Pokemon.hpp"

using namespace std;


class Player
{
    public:
    string player_name;
    Pokemon p_chosenPokemon;

    Player();
    Player(string p_name, Pokemon p_type);
    void choosePokemon(int choice);
};