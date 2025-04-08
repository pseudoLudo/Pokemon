#include <iostream>
using namespace std;

enum PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};

int main() {

    string player_name;
    PokemonChoice chosen_pokemon = InvalidChoice;
    int choice;

    cout << "Welcome to the world of Pokémon! I am Professor Oak.People call me the Pokemon Professor!\n";
    cout << "Professor Oak: First, tell me, what’s your name?\n";
    cout << "Enter your name" << endl;
    cin >> player_name;
    cout << "Great Start, " << player_name << " Professor Oak: You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!" << endl << endl;


    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokémon would you like to choose? Enter the number: ";

    cin >> choice;

    switch (choice)
    {
    case 1: cout << "You chose Bulbasaur! A wise choice." << endl;chosen_pokemon = Bulbasaur;break;
    case 2: cout << "You chose Charmander! A fiery choice." << endl;chosen_pokemon = Charmander;break;
    case 3: cout << "You chose Squirtle! A cool choice." << endl;chosen_pokemon = Squirtle;break;
    default: cout << "Hmm, that doesn't seem right, how about you with my personal favorite, Pikachu!" << endl;chosen_pokemon = InvalidChoice;break;
    }

    cout << "" << endl;
    cout << "Professor Oak: " << (chosen_pokemon == Charmander ? "Charmander" : chosen_pokemon == Bulbasaur ? "Bulbasaur" : "Squirtle") << " and you, " << player_name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n" << endl;
    return 0;

}