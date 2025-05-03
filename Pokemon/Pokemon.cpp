#include <iostream>
#include "Pokemon.hpp"
#include"PokemonType.hpp"
using namespace std;

    Pokemon::Pokemon()
    {
        name = "Unknown";
        type = PokemonType::Normal;
        health = 50;
        cout << "A new Pokemon has been created with the default constructor!\n";
    }

    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health,int p_attack)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        attackPower = p_attack;
        cout << "A new Pokemon named " << name << " has been created!\n";
    }

    Pokemon::Pokemon(const Pokemon &other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        attackPower = other.attackPower;
        cout << "A new Pokemon has been copied from " << other.name << "!\n";
    }

    Pokemon::~Pokemon()
    {
        cout << name << " has been released.\n";
    }

//methods
    void Pokemon::attack(Pokemon& target)
    {
        int damage = target.attackPower;
        cout << name << " attacks " << target.name << " for " << damage << " damage!\\n";
        target.TakeDamage(damage);
    }

    void Pokemon::TakeDamage(int dmg)
    {
        health -= dmg;
        if (health < 0)
        {
            health = 0;
        }
    }

    bool Pokemon::isFainted() const
    {
        return health <= 0;
    }

    void Pokemon::heal()
    {
        health = maxHealth;
    }