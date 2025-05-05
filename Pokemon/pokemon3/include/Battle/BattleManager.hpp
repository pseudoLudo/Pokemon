#include "iostream"
using namespace std;

#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Battle/BattleState.hpp"

class BattleManager
{
public:
    void startBattle(Player& player, Pokemon& wildPokemon);
    BattleState battleState;
    void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
    void handleBattleOutcome();
    void updateBattleState();
};