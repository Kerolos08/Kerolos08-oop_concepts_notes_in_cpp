#include <iostream>
using namespace std;

class clsA
{

private:
    int V1;
    int Fun1()
    {
        return 1;
    }

protected:
    int V2;
    int Fun2()
    {
        return 2;
    }

public:
    int V3;
    int Fun3()
    {
        return 3;
    }
};

// try to change visibility mode public/private/protected
// and see in the main what will happen iside objects.
class clsB : protected clsA
{

public:
    int Fun4()
    {

        return 4;
    }

    void TestFun()
    {
        cout << V3 << endl;
        cout << V2 << endl;
        cout << Fun2() << endl;
    }
};

class clsC : public clsB
{

public:
    int Fun5()
    {
        clsA::Fun2();
        clsA::Fun2();
        clsB::Fun4();
        clsB::TestFun();

        return 5;
    }
};

int main()
{

    clsC b;
}