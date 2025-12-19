# Objects with Parameterized Constructor and Array

```cpp
#include<iostream>
#include<vector>

using namespace std;

class clsA
{
public:

	//Parametarized Constructor
	clsA(int value)
	{
		x = value;
	}

	int x;

	void Print()
	{
		cout << "The value of x=" << x <<endl;
	}

};

int main() 

{
	
	// Initializing 3 array Objects with function calls of
    // parameterized constructor as elements of that array
	clsA obj[] = { clsA(10), clsA(20), clsA(30) };

	// using print method for each of three elements.
	for (int i = 0; i < 3; i++) {
		obj[i].Print();
	}

	return 0;
}
```

## **Summary**

1. `clsA obj[] = { clsA(10), clsA(20), clsA(30) };`
    - Temporary objects are created in the initializer list.
    - They are **copied/moved** into the array elements.
    - No `new` or `delete` needed → safer than dynamic array.
2. **Accessing elements**
    - Objects in the array behave like any named object.
    - You can call methods (`obj[i].Print()`) or access members (`obj[i].x`).
3. **Key Insight:**
    - **Arrays or vectors “own” the objects** once they are stored.
    - Nameless objects can be **used for initialization** without giving them explicit variable names.