#include <iostream>
using namespace std;

class clsPerson
{
    private:
    int _ID;
    string _Name;
    double _Salary;
    public:
    clsPerson (int ID, string Name, double Salary)
    {
        _ID = ID;
        _Name = Name;
        _Salary = Salary;
    }
    void Print ()
    {
        cout << "\nData\n";
        cout << "ID     : " <<  _ID << endl;
        cout << "Name   : " << _Name << endl;
        cout << "Salary : " <<  _Salary << endl; 
    }
    static void  ModSalary(clsPerson P1)
    {
        P1._Salary += 500;
    }
    static void  ModSalary2(clsPerson &P1)
    {
        P1._Salary += 500;
    }
    void Func1 ()
    {
        ModSalary(*this);
    }
        void Func2 ()
    {
        ModSalary2(*this);
    }
};

int main ()
{
    clsPerson P1(23, "Kero", 4000);
    P1.Func1();
    P1.Print();
    P1.Func2();
    P1.Print();

    return 0;
}