// TLEANE_D_QUESTION_1.cpp 

#include <iostream>
#include "conio.h"
#include "fstream"
#include "string"

using namespace std;

int main()
{
    int finalMark;
    string studNumber, studSurname;

    cout << "Please enter your student number: ";
    cin >> studNumber;

    cout << "Please enter your surname: ";
    cin >> studSurname;

    cout << "Please enter your final mark: ";
    cin >> finalMark;

    if (finalMark >= 50 && finalMark < 75)
    {
        cout << studNumber + " " + studSurname + " You have passed the module (congradulations)" << endl;
    }
    else if (finalMark >= 75 && finalMark <= 100)
    {
        cout << studNumber + " " + studSurname + " Congradulations, you have passed the module with a distinction!!!" << endl;
    }
    else
    {
        cout << studNumber + " " + studSurname + "You failed the module!!!" << endl;
    }

}


