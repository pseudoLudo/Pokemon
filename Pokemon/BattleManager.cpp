#include<iostream>
#include "Pokemon.hpp"

using namespace std;

class BattleManager
{
    void battle(Pokemon& playerPokemon, Pokemon& wildPokemon) {
        cout << "A wild " << wildPokemon.name << " appeared!\\n";

        while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
            playerPokemon.attack(wildPokemon);

            if (!wildPokemon.isFainted()) {
                wildPokemon.attack(playerPokemon);
            }
        }

            if (playerPokemon.isFainted()) {
                cout << playerPokemon.name << " has fainted! You lose the battle.\\n";
            }
            else {
                cout << "You defeated the wild " << wildPokemon.name << "!\\n";
            }
        }
};