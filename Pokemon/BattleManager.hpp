#include "iostream"
using namespace std;

#include "Pokemon.hpp"
#include "Player.hpp"
#include "BattleState.hpp"

class BattleManager
{
public:
    void startBattle(Player& player, Pokemon& wildPokemon);
    BattleState battleState;
    void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
    void handleBattleOutcome();
    void updateBattleState();
};