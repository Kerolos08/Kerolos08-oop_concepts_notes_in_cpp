#include <iostream>
using namespace std;

class clsA
{
    public:
    static int Func1 ()
    {
        return 100;
    }
    int Func2 ()
    {
        return 1;
    }
};

int main ()
{
    // Func1 is a static method that can be called directly with the class
    cout << clsA::Func1() << endl;     // 100

    clsA A1, A2;
    // it also can be called by the object
    cout << A1.Func1() << endl; // 100
    cout << A1.Func2()<< endl; // 1
    cout << A2.Func1() << endl; // 100
    return 0;
}