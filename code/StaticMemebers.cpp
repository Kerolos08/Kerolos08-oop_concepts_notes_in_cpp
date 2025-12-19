#include <iostream>
using namespace std;

class clsA
{
    public:
    int Var;
    static int Counter; // shared variable (class level not an object level)
    clsA ()
    {
        // this is a  constructor
        Counter++;
    }
    void Print ()
    {
        cout << "\nVar = " << Var << endl;
        cout << "counter = " << Counter << endl;
    }

};

int clsA::Counter = 0;

int main ()
{
    clsA A1, A2, A3;
    A1.Var = 10;
    A2.Var = 20;
    A3.Var = 30;

    A1.Print();
    A2.Print();
    A3.Print();

    A1.Counter = 100; // counter is a static attribute that is shared for all clsA objects
    cout << "\nAfter changing the static memeber counter value in one object" << endl;

    A1.Print();
    A2.Print();
    A3.Print();

    return 0;
}