#include <iostream>
using namespace std;

class clsPerson
{
    public:
    string FullName;
    
    clsPerson ()
    {
        // this is a constructor
        FullName  = "Kerolos Hany";
        cout << "\nHello, I'm a construcor";
    }

    ~clsPerson ()
    {
        // this is a destructor
        cout << "\nHello, I'm a destructor";
    }
};

void Func1 ()
{
    clsPerson Person1;
}

void Func2()
{
    clsPerson * Person2 = new clsPerson;
    delete Person2;
}

int main ()
{
    Func1();
    Func2();
    return 0;
}