# Objects and Vectors

```c
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
```

- `clsA(i)` → creates a temporary object.
- `push_back()` → copies that object into the vector.
- Temporary → destroyed (but the vector’s copy remains).
- Later, you access the **copied objects** from the vector.
- Vector is dealing with the items with its index name doesn't matter