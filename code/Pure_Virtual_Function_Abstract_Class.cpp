#include <iostream>
using namespace std;

// Abstract Class / InterFace / Contract.
class clsMobile
{
    virtual void Dial(string PhoneNumber) = 0;
    virtual void SendSMS(string PhoneNumber, string Text) = 0;
    virtual void TakePicture() = 0;
};

class clsIphone : public clsMobile
{
    void Dial(string PhoneNumber)
    {
    }
    void SendSMS(string PhoneNumber, string Text)
    {
    }
    void TakePicture()
    {
    }
};

class clsSamsung : public clsMobile
{
    void Dial(string PhoneNumber)
    {
    }
    void SendSMS(string PhoneNumber, string Text)
    {
    }
    void TakePicture()
    {
    }
};

int main()
{
    clsIphone I1;

    clsSamsung sam1;

    return 0;
}