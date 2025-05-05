#include "../../include/Utility/Utility.hpp"
#include <iostream>
#include <limits>
using namespace std;

namespace N_Utility
{
    void Utility::waitForEnter()
    {
        cin.get();
    }

    void Utility::consoleClear()
    {
        system("cls");
    }

    void Utility::clearInputBuffer() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}