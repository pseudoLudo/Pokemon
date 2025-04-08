#include <iostream>
using namespace std;

int main() {

    string player_name;
    int choice;

    cout << "Enter your name" << endl;
    cin >> player_name;
    cout << "Great Start, " << player_name << " Looks like you’ve mastered the opening of every code adventure. Keep this up, and you’ll be a coding master in no time!" << endl << endl;

    cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokémon would you like to choose? Enter the number: ";

    cin >> choice;
    if (choice == 1)
    {
        cout << "You chose Bulbasaur! A wise choice.\n";
    }
    else if (choice == 2)
    {
        cout << "You chose Charmander! A fiery choice.\n";
    }
    else if (choice == 3)
    {
        cout << "You chose Squirtle! A cool choice.\n";
    }
    else
    {
        cout << "Invalid choice. Please restart the game.\n";
    }

    return 0;

}