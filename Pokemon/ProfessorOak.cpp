    #include<string>
    #include<iostream>
    #include "ProfessorOak.hpp"
    #include "Player.hpp"
    #include "Utility.hpp"
    
    ProfessorOak::ProfessorOak(string prof_name)
    {
        name = prof_name;
    }

    void ProfessorOak::greetPlayer(Player &p)
    {
        cout << "Welcome to the world of Pok�mon! I am Professor Oak.People call me the Pokemon Professor!\n";
        cout << "Professor Oak: First, tell me, what�s your name?\n";
        cout << "Enter your name" << endl;
        cin >> p.player_name;
        cout << "Great Start, " << p.player_name << " Professor Oak: You must be eager to start your adventure. But first, you�ll need a Pokemon of your own!" << endl << endl;
    }

    void ProfessorOak::explainMainQuest(Player p)
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
    void ProfessorOak::offerPokemonChoices(Player &p)
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