# Objects In Memory

### How the object stored in memory

Lets assume we have this a class and we defined 2 objects of this class

```cpp
#include <iostream>
using namespace std;

class clsPerson
{
  public:
  string FirstName;
  string lastName;
  string FullName () {
    return FirstName + " " + lastName;
  };
};

int main ()
{
  clsPerson Person1, Person2;
  Person1.FirstName = "FirstName1";
  Person1.lastName = "LastName1";
  
  Person2.FirstName = "FirstName2";
  Person2.lastName = "LastName2";
  
  cout << Person1.FullName() << endl;
  cout << Person2.FullName() << endl;

  return 0;
}
```

### **How does those object stored in memory?**

when defining more than one object

each object's data members would be saved in a separate place in memory.

### **But what about method or function members?**

It would be saved in a shared place in the memory that's for not consuming a lot of memory.

![1000060399.jpg](Objects%20In%20Memory/1000060399.jpg)

### **In our example:**

![1000060396.jpg](Objects%20In%20Memory/1000060396.jpg)

All the data in those 2 objects would be separately saved in the memory for each object.

But when talking about the functions for each object those would be saved in a shared place.

So, `Person1` data members (`FirstName`, `LastName`) would be saved together in a different location for this object and `Person2` data members would be saved together in a completely different location in memory.

but both would be sharing the method members or function members saving location.
