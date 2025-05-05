#pragma once
#include<string>
#include<iostream>

using namespace std;

class Player;
class ProfessorOak
{
    public:
    string name;

    ProfessorOak(string prof_name);
    void greetPlayer(Player &p);
    void explainMainQuest(Player &p);
    void offerPokemonChoices(Player &p);
};