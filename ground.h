#ifndef GROUND_H
#define GROUND_H

#include <iostream>
#include "basket.h"

using namespace std;

basket temp;

class ground
{
public:
    void welcome() // barai khoshamadghoei
    {
        cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "|                WELCOME                |" << endl;
        cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << endl;
        cout << endl;
    }

    int menu() // barai chap menu va shoroe ya payan bazi
    {
        int option; // barai entekhab shoroe ya payan bazi

        cout << "+-------------------------------+" << endl;
        cout << "|             MENU              |" << endl;
        cout << "|-------------------------------|" << endl;
        cout << "|    [1] |  START               |" << endl;
        cout << "|    [2] |  EXIT                |" << endl;
        cout << "|-------------------------------|" << endl;
        cout << "|    ENTER A NUMBER             |" << endl;
        cout << "+-------------------------------+" << endl;

        cin >> option;

        return option;
    }

    void showscreen() // barai namayesh safeh bazi
    {

        cout << endl;
        cout << endl;
        for (size_t i = 0; i < 17; i++)
        {
            for (size_t j = 0; j < 81; j++)
            {

                if (i == 0 || i == 16)
                {
                    cout << "*";
                }
                else if (j == 0 || j == 80)
                {
                    cout << "*";
                }
                else if ((i > 6 && i < 10) && (j > 7 && j < 13))
                {
                    cout << "+";
                }
                else if ((i > 6 && i < 10) && (j > 27 && j < 33))
                {
                    cout << "+";
                }
                else if ((i > 6 && i < 10) && (j > 47 && j < 53))
                {
                    cout << "+";
                }
                else if ((i > 6 && i < 10) && (j > 67 && j < 73))
                {
                    cout << "+";
                }
                else if (i == 1 && j == 10)
                {
                    cout << "1";
                }
                else if (i == 1 && j == 30)
                {
                    cout << "2";
                }
                else if (i == 1 && j == 50)
                {
                    cout << "3";
                }
                else if (i == 1 && j == 70)
                {
                    cout << "4";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
        cout << endl;
    }

    void move(int x) // barai namayesh tagirat dar safeh baziD
    {
        cout << endl;
        cout << endl;
        if (x == 1)
        {
            x = 10;
        }
        else if (x == 2)
        {
            x = 30;
        }
        else if (x == 3 || x == 4)
        {
            x = 50;
        }

        for (size_t i = 0; i < 17; i++)
        {
            for (size_t j = 0; j < 81; j++)
            {

                if (i == 0 || i == 16)
                {
                    cout << "*";
                }
                else if (j == 0 || j == 80)
                {
                    cout << "*";
                }
                else if ((i > 6 && i < 10) && (j > 7 && j < 13))
                {
                    cout << "+";
                }
                else if ((i > 6 && i < 10) && (j > 27 && j < 33))
                {
                    cout << "+";
                }
                else if ((i > 6 && i < 10) && (j > 47 && j < 53))
                {
                    cout << "+";
                }
                else if ((i > 6 && i < 10) && (j > 67 && j < 73))
                {
                    cout << "+";
                }
                else if (i == 1 && j == 10)
                {
                    cout << "1";
                }
                else if (i == 1 && j == 30)
                {
                    cout << "2";
                }
                else if (i == 1 && j == 50)
                {
                    cout << "3";
                }
                else if (i == 1 && j == 70)
                {
                    cout << "4";
                }
                else if ((j == x || j == x + 20) && ((i > 10 && i < 13) || (i < 6 && i > 3)))
                {
                    cout << "|";
                }
                else if ((j >= x && j <= x + 20) && (i == 13 || i == 3))
                {
                    cout << "-";
                }
                else if (j == x && i == 10)
                {
                    cout << "^";
                }
                else if (j == x + 20 && i == 6)
                {
                    cout << "v";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
        cout << endl;

    } // barai namayesh jabejaei 2 sabad ba ham ba estefadeh az x be onvan shomareh sabad

    void movebasket(int transfer) // barai jabejaei maghadir class ha
    {
        int op = transfer;

        if (op == 1)
        {
            temp = object[0];
            object[0] = object[1];
            object[1] = temp;
        }
        else if (op == 2)
        {
            temp = object[1];
            object[1] = object[2];
            object[2] = temp;
        }
        else if (op == 3 || op == 4)
        {
            temp = object[2];
            object[2] = object[3];
            object[3] = temp;
        }

        move(transfer);
    }

    int search() // barai yaftan e sabad darai maar
    {
        for (size_t i = 0; i < 4; i++)
        {

            if (object[i].get_snake() == 1)
            {
                return i;
            }
        }
    }

private:
    basket object[4] = {basket{1, 1}, basket{2, 0}, basket{3, 0}, basket{4, 0}}; // barai sabad ha
};

#endif