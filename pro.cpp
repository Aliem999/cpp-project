#include <iostream>
#include "basket.h"
#include "ground.h"

using namespace std;

int main()
{
    int option;                                                                  // barai start ya exit az bazi
    int guess;                                                                   // barai vorodi ke karbar vared mikonad
    int flag = 0;                                                                // dar sorati ke karbar game over shavad 1 mishe
    ground g;                                                                    // barai class safheh

    g.welcome();       // chap e welcome
    option = g.menu(); // chap menu va start ya exit az bazi

    while (option != 2 || flag == 1)
    {
        if (option == 1 || flag == 1)
        {
            if (option == 2)
            {
                break;
            }
            flag = 0;
            g.showscreen();

            cout << "Snake Basket: " << g.search() + 1 << endl
                 << endl;

            for (size_t i = 1; i <= 4; i++)
            {
                g.movebasket(i);
            }

            g.showscreen();

            cout << "Enter Snake Basket Number: ";
            cin >> guess;

            if (guess == (g.search() + 1))
            {
                cout << endl;
                cout << "  ***** WIN *****  " << endl;
            }
            else
            {
                cout << endl;
                cout << "True Answer: " << g.search() + 1 << endl;
                cout << endl;
                cout << "  ***** GAME OVER *****   " << endl;
                cout << endl;
                flag = 1;
                break;
            }
        }
    }

    return 0;
}
