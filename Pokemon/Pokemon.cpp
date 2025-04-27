#include <iostream>
#include "Pokemon.hpp"
using namespace std;

    Pokemon::Pokemon()
    {
        name = "Unknown";
        type = PokemonType::Normal;
        health = 50;
        cout << "A new Pokemon has been created with the default constructor!\n";
    }

    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        cout << "A new Pokemon named " << name << " has been created!\n";
    }

    Pokemon::Pokemon(const Pokemon &other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A new Pokemon has been copied from " << other.name << "!\n";
    }

    Pokemon::~Pokemon()
    {
        cout << name << " has been released.\n";
    }

//methods
    void Pokemon::attack()
    {
        cout << name << "attacks with a powerful move!\n";
    }