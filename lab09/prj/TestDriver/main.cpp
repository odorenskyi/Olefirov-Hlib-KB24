#include <iostream>
#include "ModulesOlefirov.h"
#include "locale.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    calculateGasPayment();
    findShoeSize();
    processNumber();

     return 0;
}
