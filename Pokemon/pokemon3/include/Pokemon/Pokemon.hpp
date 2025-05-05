// #pragma once
#ifndef POKEMON_HPP
#define POKEMON_HPP
#include <string>
using namespace std;
namespace N_Pokemon
{
    enum class PokemonType;


    class Pokemon
    {
    public:
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;

        Pokemon();
        Pokemon(string p_name, PokemonType p_type, int p_health, int p_attack);
        Pokemon(const Pokemon& other);
        ~Pokemon();

        void attack(Pokemon& target);
        void TakeDamage(int dmg);
        bool isFainted() const;
        void heal();

    };

#endif
}