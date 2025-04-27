#include"Player.hpp"
#include "iostream"
using namespace std;

    Player::Player()
    {
        player_name = "Trainer";
        p_chosenPokemon = Pokemon();
        cout << "a new player named "<<player_name<<"has been created!";
    }

    Player::Player(string p_name, Pokemon p_type)
    {
        player_name = p_name;
        p_chosenPokemon = p_type;
        cout << "A new Pokemon named " << p_name << " has been created!\n";
    }

    void Player::choosePokemon(int choice)
    {
        switch (choice)
        {
        case 1: p_chosenPokemon =  Pokemon("Charmander", PokemonType::Fire, 100);break;
        case 2: p_chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100); 
        case 3: p_chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);break;
        default: p_chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);break;
        }

        cout << "Player " << player_name << " chose " << p_chosenPokemon.name << "!\n";
    }
