#include <iostream>
using namespace std;

class clsPerson 
{
    public:
    int ID;
    string FirstName;
    double Salary;
    
    clsPerson (int ID, string FirstName, double Salary)
    {
        this->ID = ID;
        this->FirstName = FirstName;
        this->Salary = Salary;
    }

    void Print ()
    {
        cout << ID << " " << FirstName << " " << Salary << endl;
    }

    static void Func1 (clsPerson P1)
    {
        P1.Print();
    }

    void Func2 ()
    {
        Func1(*this);
    }
};  

int main ()
{
    clsPerson P1 (43, "Kerolos", 4000);
    P1.Print();
    P1.Func2();

    return 0;
}