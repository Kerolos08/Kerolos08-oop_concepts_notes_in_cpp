# Calculator - Solution

[Project 1: Calculator - Solution](https://programmingadvices.com/courses/oop-as-it-should-be-concepts/lectures/44025441)

```cpp
#include <iostream>
using namespace std;

class clsCalculator
{
private:
    float _LastNumber = 0;
    float _Result = 0;
    string _LastOperation = "Clear";
    float _PreviousResult = 0; // to store the last Result in case of restoring.
    bool _IsZero(float Number)
    {
        // ? Example for Abstraction.
        return (Number == 0);
    }

public:
    void Clear()
    {
        _PreviousResult = 0;
        _LastOperation = "Clearing";
        _LastNumber = 0;
        _Result = 0;
    }
    void Add(float Number)
    {
        _PreviousResult = _Result;
        _LastNumber = Number;
        _LastOperation = "Adding";
        _Result += Number;
    }
    void Subtract(float Number)
    {
        _PreviousResult = _Result;
        _LastNumber = Number;
        _LastOperation = "Subtracting";
        _Result -= Number;
    }
    void Multiply(float Number)
    {
        _PreviousResult = _Result;
        _LastNumber = Number;
        _LastOperation = "Multiplying";
        _Result *= Number;
    }
    void Divide(float Number)
    {
        _PreviousResult = _Result;
        _LastNumber = Number;
        if (_IsZero(Number))
        {
            Number = 1;
        }
        _LastOperation = "Dividing";
        _Result /= Number;
    }
    void CancelLastOperation()
    {
        _LastNumber = 0;
        _LastOperation = "Cancelling Last Operation";
        _Result = _PreviousResult;
    }
    float GetFinalResult()
    {
        return _Result;
    }
    void PrintResult()
    {
        cout << "Result After " << _LastOperation << " " << _LastNumber << " is: " << _Result << endl;
    }
};

int main()
{
    clsCalculator Calculator1;

    Calculator1.Clear();

    Calculator1.Add(10);
    Calculator1.PrintResult();

    Calculator1.Subtract(2);
    Calculator1.PrintResult();

    Calculator1.Divide(0);
    Calculator1.PrintResult();

    Calculator1.Multiply(3);
    Calculator1.PrintResult();

    Calculator1.CancelLastOperation();
    Calculator1.PrintResult();

    Calculator1.Clear();
    Calculator1.PrintResult();

    return 0;
}
```