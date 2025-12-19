#include <iostream>
using namespace std;

class clsPerson 
{
    string _FullName;
    class clsAddress
    {
        private:
        string _AddressLine1;
        string _AddressLine2;
        string _City;
        string _Country;

        public:
        clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
        {
            _AddressLine1 = AddressLine1;
            _AddressLine2 = AddressLine2;
            _City = City;
            _Country = Country;
        }

        void Set_AddressLine1 (string AddLine1)
        {
            _AddressLine1 = AddLine1;
        }

        string Get_AddressLine1 ()
        {
            return _AddressLine1;
        }

        void Set_AddressLine2 (string AddLine2)
        {
            _AddressLine2 = AddLine2;
        }

        string Get_AddressLine2 ()
        {
            return _AddressLine2;
        }

        void Set_City (string City)
        {
            _City = City;
        }

        string Get_City ()
        {
            return _City;
        }

        void Set_Country (string Country)
        {
            _Country = Country;
        }

        string Get_Country ()
        {
            return _Country;
        }

        void Print()
        {
            cout << "\nAddress\n";
            cout << _AddressLine1 << endl;
            cout << _AddressLine2 << endl;
            cout << _City << endl;
            cout << _Country << endl;
        }

    };

    public:
    clsAddress Address1;
    clsPerson (string FullName, string AddLine1, string AddLine2, string City, string Country) :
    Address1(AddLine1, AddLine2, City, Country)
    {
        _FullName = FullName;
    }
    void Set_FullName (string fullname)
    {
        _FullName = fullname;
    }
    string Get_FullName ()
    {
        return _FullName;
    }
};

int main ()
{
    clsPerson P1 ("Kerolos xxx", "Street 14", "Building 2", "Cairo", "Egypt");
    P1.Address1.Print();

    return 0;
}