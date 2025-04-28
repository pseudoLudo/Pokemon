#include <iostream>
#include <limits>
#include <string>
#include "Game.hpp"
#include "Utility.hpp"
#include "Player.hpp"
using namespace std;


Game::Game() {

}

void Game::gameLoop (Player &p)
{
    bool keepPlaying  = true;
    int choice;

    while (keepPlaying)
    {
        Utility::consoleClear();
        cout << "What would you like to do next " << p.player_name << " ?" <<endl;
        cout << "1.Battle Wild Pokémon" << endl;
        cout << "2.Visit PokeCenter" << endl;
        cout << "3.Challenge Gyms" << endl;
        cout << "4.Enter Pokémon League" << endl;
        cout << "5.Quit" << endl;

        cin>>choice;

        switch (choice)
        {
        case 1:
        cout << "You look around... but all the wild Pokémon are on vacation. Maybe try again later?\n";break;
        case 2:
        cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\n";break;
        case 3:
        cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";break;
        case 4:
        cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!\n";break;
        case 5:
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
