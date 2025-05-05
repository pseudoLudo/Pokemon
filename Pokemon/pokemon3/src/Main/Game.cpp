#include <iostream>
#include <limits>
#include <string>
#include "../../include/Main/Game.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/grass.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Battle/BattleManager.hpp"

using namespace std;


Game::Game() {
    forestGrass = {"Forest", {{"Pidgey", PokemonType::Normal, 40,30}, {"Caterpie", PokemonType::Bug, 35, 40}}, 70};
};

void Game::gameLoop (Player &p)
{
    BattleManager battleManager;
    bool keepPlaying  = true;
    int choice;
    Utility::consoleClear();

    while (keepPlaying)
    {
        
        cout << "What would you like to do next " << p.player_name << " ?" <<endl;
        cout << "1.Battle Wild Pokémon" << endl;
        cout << "2.Visit PokeCenter" << endl;
        cout << "3.Challenge Gyms" << endl;
        cout << "4.Enter Pokémon League" << endl;
        cout << "5.Quit" << endl;

        cin>>choice;

        Utility::clearInputBuffer();

        switch (choice)
        {
        case 1:
        {
            WildEncounterManager encounterManager;
            Pokemon encounteredPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
            battleManager.startBattle(p, encounteredPokemon);
            break;
        }

        case 2:
        {
            cout << "You head to the PokeCenter.\\n";
            p.p_chosenPokemon.heal();
            cout << p.p_chosenPokemon.name << "'s health is fully restored!\\n";
            break;
        }
        case 3:
        cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";break;
        case 4:
        cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!\n";break;
        case 5:
            keepPlaying = false;
        cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!\n";
        cout << "Are you sure you want to quit? (y/n): "<< endl;

        char quitChoice;
        cin >> quitChoice;
        if (quitChoice == 'y' || quitChoice == 'Y') {
            keepPlaying = false;
        }
        break;
        
        default:
        cout << "That's not a valid choice. Try again!\n";break;
        }

        Utility::waitForEnter();
    }
    cout << "Goodbye, " << p.player_name << "! Thanks for playing!\n";
} 
