#include <iostream>
using namespace std;

enum class PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};

enum class PokemonType
{
    Fire,
    Electric,
    Water,
    Earth,
    Grass,
    Normal
};

class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;

//two constructor
    Pokemon()
    {
    }

    Pokemon(string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
    }
//methods
    void attack()
    {
        cout << name << "attacks with a powerful move!\n";
    }
};

class Player
{
public:
    string player_name;
    Pokemon p_chosenPokemon;

    void choosePokemon(int choice)
    {
        switch (choice)
        {
        case 1: p_chosenPokemon =  Pokemon("Charmander", PokemonType::Fire, 100);break;
        case 2: p_chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100); 
        case 3: p_chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);break;
        default: p_chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);break;
        }

        cout << "Player " << player_name << " chose " << p_chosenPokemon.name << "!\n";
    }

    
};

class ProfessorOak
{
    public:
    string name;

    void greetPlayer(Player &p)
    {
        cout << "Welcome to the world of Pok�mon! I am Professor Oak.People call me the Pokemon Professor!\n";
        cout << "Professor Oak: First, tell me, what�s your name?\n";
        cout << "Enter your name" << endl;
        cin >> p.player_name;
        cout << "Great Start, " << p.player_name << " Professor Oak: You must be eager to start your adventure. But first, you�ll need a Pokemon of your own!" << endl << endl;
    }

    void offerPokemonChoices(Player &p)
    {
        cout << "You can choose one of the following Pok�mon:\n";
        cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
        cout << "Which Pok�mon would you like to choose? Enter the number: ";
    
        int choice;
        cin >> choice;
    
        switch (choice)
        {
        case 1: cout << "You chose Bulbasaur! A wise choice." << endl;break;
        case 2: cout << "You chose Charmander! A fiery choice." << endl;break;
        case 3: cout << "You chose Squirtle! A cool choice." << endl;break;
        default: cout << "Hmm, that doesn't seem right, how about you with my personal favorite, Charmander!" << endl;break;
        }
    
        cout << "" << endl;
        cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n" << endl;
    }
};

int main() {

    ProfessorOak professor; 
    Pokemon placeholderPokemon;
    Player player;    

    placeholderPokemon.name = "Pika";
    placeholderPokemon.type = PokemonType::Electric;
    placeholderPokemon.health = 40;

    player.player_name = "Trainer";
    professor.name = "Prof Oak";

    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    cout << "Professor Oak: " << player.p_chosenPokemon.name << " and you, " << player.player_name << ", are going to be the best of friends!\n"; 
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;

}