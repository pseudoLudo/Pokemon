#include <iostream>
#include <limits>
#include <string>

using namespace std;

#include"PokemonType.hpp"
#include"PokemonChoice.hpp"
#include"Utility.hpp"
#include"Player.hpp"
#include"ProfessorOak.hpp"
#include"Game.hpp"

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
