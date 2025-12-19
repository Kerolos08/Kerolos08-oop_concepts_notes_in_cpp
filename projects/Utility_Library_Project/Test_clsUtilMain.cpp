#include <iostream>
#include "clsUtil.h"

using namespace std;

int main()
{
    // Random nums
    clsUtil::Srand();
    cout << clsUtil::RandomNumber(1, 10) << endl;
    cout << "\n";
    cout << clsUtil::GetRandomCharacter(clsUtil::MixChars) << endl;
    cout << "\n";
    cout << clsUtil::GenerateWord(clsUtil::MixChars, 8) << endl;
    cout << "\n";
    cout << clsUtil::GenerateKey(clsUtil::MixChars) << endl;
    cout << "\n";
    clsUtil::GenerateKeys(10, clsUtil::MixChars);
    cout << "\n";
    cout << endl;

    // Swap Int
    int A = 10, B = 20;
    cout << A << "  " << B << endl;
    clsUtil::Swap(A, B);
    cout << A << "  " << B << endl;
    cout << "\n";

    // Swap double
    double d1 = 10.5, d2 = 20.8;
    cout << d1 << "  " << d2 << endl;
    clsUtil::Swap(d1, d2);
    cout << d1 << "  " << d2 << endl;
    cout << "\n";

    // Swap String
    string S1 = "Kero", S2 = "XXX";
    cout << S1 << "  " << S2 << endl;
    clsUtil::Swap(S1, S2);
    cout << S1 << "  " << S2 << endl;
    cout << "\n";

    // Swap Date
    clsDate Date1("2/1/2022");
    clsDate Date2(15, 8, 2001);
    cout << Date1.DateToString() << "  " << Date2.DateToString() << endl;
    clsUtil::Swap(Date1, Date2);
    cout << Date1.DateToString() << "  " << Date2.DateToString() << endl;

    // Shuffle
    // int array
    int Iarr[5] = {1, 2, 3, 4, 5};
    clsUtil::ShuffleArray(Iarr, 5);
    cout << "\nArray after shuffle: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << Iarr[i] << endl;
    }

    // string array
    string Sarr[5] = {"Kero", "XXX", "DDDD", "GGGG", "0000"};
    clsUtil::ShuffleArray(Sarr, 5);
    cout << "\nArray after shuffle: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << Sarr[i] << endl;
    }

    int Iarr2[5];
    clsUtil::FillArrayWithRandomNumbers(Iarr2, 5, 20, 50);
    cout << "\nArray after fill: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << Iarr2[i] << endl;
    }

    string Sarr2[5];
    clsUtil::FillArrayWithRandoumWords(Sarr2, 5, clsUtil::MixChars, 8);
    cout << "\nArray after fill: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << Sarr2[i] << endl;
    }

    string Sarr3[5];
    clsUtil::FillArrayWithRandoumKeys(Sarr3, 5, clsUtil::MixChars);
    cout << "\nArray after fill: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << Sarr3[i] << endl;
    }

    // Encryption and Decryption
    const char Encryptionkey = 2;
    string Text = "Kero XJ0";
    string TextAfterEncryption, TextAfterDecryption;

    TextAfterEncryption = clsUtil::EncryptText(Text, Encryptionkey);
    TextAfterDecryption = clsUtil::DecryptionText(TextAfterEncryption, Encryptionkey);

    cout << "\nText After Encryption: " << TextAfterEncryption << endl;
    cout << "Text After Decryption: " << TextAfterDecryption << endl;

    return 0;
}