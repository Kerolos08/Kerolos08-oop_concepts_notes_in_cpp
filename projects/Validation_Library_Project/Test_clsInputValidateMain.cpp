#include <iostream>
#include "clsInputValidate.h"
using namespace std;

int main()
{
    cout << clsInputValidate::IsNumberBetween(0, 1, 5) << endl;
    cout << clsInputValidate::IsNumberBetween(2.4, 1.5, 6.8) << endl;

    cout << clsInputValidate::IsDateBetween(clsDate(), clsDate("1/4/2025"), clsDate("1/12/2025")) << endl;
    cout << clsInputValidate::IsDateBetween(clsDate(), clsDate("1/12/2025"), clsDate("1/4/2025")) << endl;

    cout << "\nPlease Enter a Number: \n";
    int x = clsInputValidate::ReadIntNumber("Invalid Number, Enter again: \n");
    cout << "X = " << x;

    cout << "\nPlease Enter a Number between 1 and 5: \n";
    int y = clsInputValidate::ReadIntNumberbetween(1, 5, "Number is not within range, Enter again: \n");
    cout << "y=" << y;

    cout << "\nPlease Enter a Double Number:\n";
    double a = clsInputValidate::ReadDoubleNumber("Invalid Number, Enter again:\n");
    cout << "a=" << a;

    cout << "\nPlease Enter a Double Number between 1 and 5:\n";
    double b = clsInputValidate::ReadDoubleNumberbetween(1, 5, "Number is not within range, enter again:\n");
    cout << "b=" << b;

    cout << endl << clsInputValidate::IsValidDate(clsDate(35, 12, 2022)) << endl;

    return 0;
}