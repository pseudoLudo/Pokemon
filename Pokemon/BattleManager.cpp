#include<iostream>
#include"Pokemon.hpp"
#include"BattleManager.hpp"
#include"Utility.hpp"
using namespace std;

 void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
        //cout << "A wild " << wildPokemon.name << " appeared!\\n";

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

 void BattleManager::startBattle(Player& player, Pokemon& wildPokemon)
 {
     std::cout << "A wild " << wildPokemon.name << " appeared!\n";
     battle(player.p_chosenPokemon, wildPokemon);
 }

 void BattleManager::handleBattleOutcome(Player& player, bool playerWon) {
     if (playerWon) {
         std::cout << player.p_chosenPokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
     }
     else {
         std::cout << "Oh no! " << player.p_chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
         Utility::waitForEnter();
         std::cout << "Game Over.\n";
     }
 }
