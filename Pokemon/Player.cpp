#include"PokemonType.hpp"
#include"PokemonChoice.hpp"
#include "Utility.hpp"
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
        switch ((PokemonChoice)choice)
        {
        case PokemonChoice::Charmander: p_chosenPokemon =  Pokemon("Charmander", PokemonType::Fire, 100,50);break;
        case PokemonChoice::Bulbasaur: p_chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100, 50); 
        case PokemonChoice::Squirtle: p_chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100, 50);break;
        default: p_chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100, 50);break;
        }

        cout << "Player " << player_name << " chose " << p_chosenPokemon.name << "!\n";
    }
