#include <iostream>
using namespace std;

class clsA
{
    private:
    int _Var1;
    protected:
    int _Var3;
    public:
    int Var2;
    clsA ()
    {
        _Var1 = 10;
        _Var3 = 20;
        Var2 = 30;
    }

    friend class clsB;
};

class clsB
{
    public:
    void Display(clsA A1)
    {
        cout << endl << "The value of Var1 = " << A1._Var1;
        cout << endl << "The value of Var2 = " << A1.Var2;
        cout << endl << "The value of Var3 = " << A1._Var3;
    }

};


int main ()
{
    clsA A1;
    clsB B1;
    B1.Display(A1);

    return 0;
}