#include <iostream>
#include <limits>
#include <string>

using namespace std;

#include"../../include/Pokemon/PokemonType.hpp"
#include"../../include/Pokemon/PokemonChoice.hpp"
#include"../../include/Utility/Utility.hpp"
#include"../../include/Character/Player/Player.hpp"
#include"../../include/Character/ProfessorOak.hpp"
#include"../../include/Main/Game.hpp"

int main() {

    ProfessorOak professor("Professor Oak");
    Player player; 

    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);

    Game game;
    game.gameLoop(player);

    return 0;
}
