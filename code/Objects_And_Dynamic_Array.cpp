#include <iostream>
using namespace std;

class clsA
{
public:
    clsA()
    {
        // Dummy constructor
    }

    clsA(int value)
    {
        x = value;
    }

    int x;

    void Print()
    {
        cout << "The Value of x = " << x << endl;
    }
};

int main()
{
    // we want a dynamic array of 5 members.
    int NumberOfArrayItems = 5;
    // if we comment out the default constructor there is an error that will be generated here.
    // thats because object dynamic array allocating uses the class default constructor.
    clsA *arrA = new clsA[NumberOfArrayItems];

    // creating temporary objects that calls the parameterized constructor and coppying its values to the dynamic array items.
    for (int i = 0; i < NumberOfArrayItems; i++)
    {
        arrA[i] = clsA(i);
    }

    // object is saved in the dynamic array and it deals with them without names just by index
    for (int i = 0; i < NumberOfArrayItems; i++)
    {
        arrA[i].Print();
    }

    // deleting the allocated memory in heap to avoid memory leak
    delete arrA;

    return 0;
}