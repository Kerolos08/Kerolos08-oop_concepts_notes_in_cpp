#include <iostream>
using namespace std;

const short Max_List_Number = 100;

class clsCopy
{
    private:
    int * List;
    public:
    clsCopy ()
    {
        List = new int [Max_List_Number];
        for (short i = 0; i < Max_List_Number; i++)
        {
            List[i] = -1;
        }
    }
    clsCopy (const clsCopy & OBJ)
    {
        List = new int [Max_List_Number];
        for (short i = 0; i < Max_List_Number; i++)
        {
            List [i] = OBJ.List[i];
        }
    }
    void SetIndex (short Idx, short Value)
    {
        List[Idx] = Value;
    }
    void GetData (short N)
    {
        for (short i = 0; i < N; i++)
        {
            cout << List[i] << " ";
        }
        cout << "\n";
    }
};

int main ()
{
    clsCopy OBJ1;
    OBJ1.GetData(5); // -1 -1 -1 -1 -1

    clsCopy OBJ2 = OBJ1;
    OBJ2.SetIndex(2, 10);

    OBJ2.GetData(5); // -1 -1 10 -1 -1
    OBJ1.GetData(5); // -1 -1 10 -1 -1

    return 0;
}