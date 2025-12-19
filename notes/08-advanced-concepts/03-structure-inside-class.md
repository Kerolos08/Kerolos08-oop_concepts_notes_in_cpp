# Structure Inside Class

A structure defined inside a class becomes a **member type** of that class.

It can be used to group related data together and is **scoped within the class**.

## Example with Code

```cpp
#include <iostream>
using namespace std;

class clsPerson 
{
    struct stAddress
    {
        string AddressLine1;
        string AddressLine2;
        string City;
        string Country;
    };
    public:
    string FullName;
    stAddress Address1;

    clsPerson ()
    {
        FullName = "Kerolos Hany";
        Address1.AddressLine1 = "Un street / Un Village";
        Address1.AddressLine2 = "14, 2";
        Address1.City = "Cairo";
        Address1.Country = "Egypt";
    }

    void PrintAddress ()
    {
        cout << "\nAddress: \n";
        cout << Address1.AddressLine1 << endl;
        cout << Address1.AddressLine2 << endl;
        cout << Address1.City << endl;
        cout << Address1.Country << endl;
    }
};

int main ()
{
    clsPerson Person1;
    Person1.PrintAddress();
    
    return 0;
};
```