#include <iostream>
using namespace std;

class clsPerson // ? defining a class and its a data type
{
    // ? this private and will not be accessed from outside the class
    // ? for internal use only
    int x;

public:
    string FirstName; // ? this memeber called attribute
    string LastName;  // ? this also an attribute
    string FullName() // ? but this is method
    {
        return FirstName + " " + LastName;
    }
};

int main()
{
    clsPerson Person1; // ! object from Person class
    Person1.FirstName = "Kero";
    Person1.LastName = "xxxx";
    cout << Person1.FullName() << endl;

    string S1 = "......"; // ! S1 is an object from string class

    return 0;
}