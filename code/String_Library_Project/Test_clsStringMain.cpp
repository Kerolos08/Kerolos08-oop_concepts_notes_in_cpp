#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
    clsString string1;
    clsString string2("This is a Text");

    string1.Set_Value("this is a text2");

    cout << string1.Get_Value() << endl;
    cout << string2.Get_Value() << endl;

    cout << "Number of words is: " << clsString::CountEachWord("Calss static Function trail") << endl;
    cout << "Number of words is: " << string2.CountEachWord() << endl;

    string2.PrintFirstLetterFromEachWord();
    clsString::PrintFirstLetterFromEachWord("Calss static Function trail");

    string2.UpperFirstLetter();
    cout << clsString::UpperFirstLetter("Calss static Function trail") << endl;

    string2.LowerFirsLetter();
    cout << clsString::LowerFirsLetter("Calss static Function trail") << endl;

    string2.LowerAllLetter();
    cout << clsString::LowerAllLetter("Calss static Function trail") << endl;

    string2.UpperAllLetter();
    cout << clsString::UpperAllLetter("Calss static Function trail") << endl;

    cout << string2.CountCapitalLetter() << endl;
    cout << clsString::CountCapitalLetter("Calss static Function trail") << endl;

    cout << string2.CountSmallLetter() << endl;
    cout << clsString::CountSmallLetter("Calss static Function trail") << endl;

    string2.CountLetterMatchCase('t');
    cout << clsString::CountLetterMatchCase("Calss static Function trail", 't') << endl;

    cout << string2.CountLetterMatchCase('t', false) << endl;
    cout << clsString::CountLetterMatchCase("Calss static Function trail", 't', false) << endl;

    string2.PrintEachWord();
    clsString::PrintEachWord("Calss static Function trail");

    return 0;
}