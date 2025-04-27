#include <iostream>
#include <limits>
#include <string>

using namespace std;

#include"PokemonType.hpp"
#include"PokemonChoice.hpp"
#include"Utility.hpp"
#include"Player.hpp"


class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;

//two constructor
    Pokemon()
    {
        name = "Unknown";
        type = PokemonType::Normal;
        health = 50;
        cout << "A new Pokemon has been created with the default constructor!\n";
    }

    Pokemon(string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        cout << "A new Pokemon named " << name << " has been created!\n";
    }

    Pokemon(const Pokemon &other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A new Pokemon has been copied from " << other.name << "!\n";
    }

    ~Pokemon()
    {
        cout << name << " has been released.\n";
    }

//methods
    void attack()
    {
        cout << name << "attacks with a powerful move!\n";
    }
};


class ProfessorOak
{
    public:
    string name;

    ProfessorOak(string prof_name)
    {
        name = prof_name;
    }

    void greetPlayer(Player &p)
    {
        cout << "Welcome to the world of Pok�mon! I am Professor Oak.People call me the Pokemon Professor!\n";
        cout << "Professor Oak: First, tell me, what�s your name?\n";
        cout << "Enter your name" << endl;
        cin >> p.player_name;
        cout << "Great Start, " << p.player_name << " Professor Oak: You must be eager to start your adventure. But first, you�ll need a Pokemon of your own!" << endl << endl;
    }

    void explainMainQuest(Player p)
    {
        Utility::consoleClear();
        cout << "Professor Oak: Oak-ay " << p.player_name << " I am about to explain you about your upcoming grand adventure." << endl;
        Utility::waitForEnter();
        cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck." << endl;
        cout << "Professor Oak: Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League. " << endl;
        Utility::waitForEnter();
        cout << p.player_name <<" : Wait... that sounds a lot like every other Pokémon game out there." << endl;
        Utility::waitForEnter();
        cout << "Professor Oak: Shhh! Don't break the fourth wall " << p.player_name <<  " ! This is serious business." << endl;
        Utility::waitForEnter();
        cout << "Professor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter." << endl;
        Utility::waitForEnter();
        cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!" << endl;
        Utility::waitForEnter();
        cout << p.player_name <<" : Sounds like a walk in the park... right?" << endl;
        Utility::waitForEnter();
        cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one.\n"; 
        Utility::waitForEnter();
        cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?\n";
        Utility::waitForEnter();
        cout << "\n" << p.player_name << ": Ready as I’ll ever be, Professor!\n";
        Utility::waitForEnter();
        cout << "\nProfessor Oak: That’s the spirit! Now, your journey begins...\n";
        cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
        Utility::consoleClear();
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

void gameLoop (Player &p)
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

int main() {

    Pokemon charmander("Charmander",PokemonType::Fire,100);
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander); 

    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);

    cout << "\n[Placeholder for the Game Loop]\n";

    return 0;
}
