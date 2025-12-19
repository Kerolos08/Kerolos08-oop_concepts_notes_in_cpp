#include <iostream>
#include "clsPerson.h"
#include "clsEmployee.h"

using namespace std;

int main()
{
    clsEmployee Emp1("657381", "Kero", "xxxx", "me20@gmail.com", "+23756285", "Developer", "Senior", 343000);
    Emp1.Print();
    return 0;
}