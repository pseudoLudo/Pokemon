#include<iostream>
#include"Pokemon.hpp"
#include"BattleManager.hpp"
#include"Utility.hpp"
using namespace std;

 void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
     while (battleState.battleOngoing) {
         if (battleState.playerTurn) {
             battleState.playerPokemon->attack(*battleState.wildPokemon);
         }
         else {
             battleState.wildPokemon->attack(*battleState.playerPokemon);
         }

         updateBattleState();

         battleState.playerTurn = !battleState.playerTurn;

         Utility::waitForEnter();
     }

     handleBattleOutcome();
}

 void BattleManager::startBattle(Player& player, Pokemon& wildPokemon)
 {
     battleState.playerPokemon = &player.p_chosenPokemon;
     battleState.wildPokemon = &wildPokemon;
     battleState.playerTurn = true;  
     battleState.battleOngoing = true;
     std::cout << "A wild " << wildPokemon.name << " appeared!\n";
     battle(player.p_chosenPokemon, wildPokemon);
 }

 void BattleManager::handleBattleOutcome() {
     if (battleState.playerPokemon->isFainted()) {
         std::cout << battleState.playerPokemon->name << " has fainted! You lose the battle.\n";
     }
     else {
         std::cout << "You defeated the wild " << battleState.wildPokemon->name << "!\n";
     }
 }

 void BattleManager::updateBattleState() {
     if (battleState.playerPokemon->isFainted()) {
         battleState.battleOngoing = false;
     }
     else if (battleState.wildPokemon->isFainted()) {
         battleState.battleOngoing = false;
     }
 }
