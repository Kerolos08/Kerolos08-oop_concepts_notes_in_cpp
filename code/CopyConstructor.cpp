#include <iostream>
using namespace std;

class clsAddress
{
private:
    string _AddressLine1;
    string _AddressLine2;
    string _POBox;
    string _ZipCode;

public:
    clsAddress (string AddressLine1, string AddressLine2, string POBox, string ZipCode)
    {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _POBox = POBox;
        _ZipCode = ZipCode;
    }
    clsAddress (const clsAddress & obj)
    {
        _AddressLine1 = obj._AddressLine1;
        _AddressLine2 = obj._AddressLine2;
        _POBox = obj._POBox;
        _ZipCode = obj._ZipCode;
    }
    void SetAddressLine1(string AddressLine1)
    {
        _AddressLine1 = AddressLine1;
    }
    string AddressLine1()
    {
        return _AddressLine1;
    }
    void SetAddressLine2(string AddressLine2)
    {
        _AddressLine2 = AddressLine2;
    }
    string AddressLine2()
    {
        return _AddressLine2;
    }
    void SetPOBox(string POBox)
    {
        _POBox = POBox;
    }
    string PoBox()
    {
        return _POBox;
    }
    void SetZipCode(string ZipCode)
    {
        _ZipCode = ZipCode;
    }
    string ZipCode()
    {
        return _ZipCode;
    }
    void PrintAddress()
    {
        cout << "\nAddress Details:\n";
        cout << "------------------------";
        cout << "\nAddressLine1: " << _AddressLine1 << endl;
        cout << "AddressLine2: " << _AddressLine2 << endl;
        cout << "POBox       : " << _POBox << endl;
        cout << "ZipCode     : " << _ZipCode << endl;
    }
};

int main()
{
    clsAddress Address1("Queen Alia Street","B 303 ","11192","5555");
    Address1.PrintAddress();

    clsAddress Address2 = Address1;
    Address2.PrintAddress();

    return 0;
}