#include <iostream>
#include <vector>

using namespace std;

class clsA
{
public:
    int x;
    
    // Parametarized Constructor
    clsA(int value)
    {
        x = value;
    }


    void Print()
    {
        cout << "The value of x=" << x << endl;
    }
};

int main()

{

    vector<clsA> v1;
    short NumberOfObjects = 5;

    //creating  a temporary objects that is coppied to the vector
    for (int i = 0; i < NumberOfObjects; i++)
    {
        v1.push_back(clsA(i));
    }

    //printing objects inside the vector
    for (int i = 0; i < NumberOfObjects; i++)
    {
        v1[i].Print();
    }
    return 0;
}
