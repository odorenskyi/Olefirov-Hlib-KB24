#include <iostream>
#include "ModulesOlefirov.h"
#include "locale.h"
using namespace std;

int main()
{
     setlocale(LC_ALL, "ukr");
     char letter;
     char exit_choice;
do {
    cout << "Введiть букву(u, t, r, e): ";
    cin >> letter;
switch(letter){

case'u':{
     double x, y, z;
    cout << endl << "Введiть x, y, z: ";
    cin >> x >> y >> z;
    double result = calculate_S(x, y, z);
    cout << endl << "Результат обчислення: " << result << endl;
    break;
}
case 't':
    calculateGasPayment();
    break;
case 'r':
    findShoeSize();
    break;
case 'e':
    processNumber();
    break;
    default:
    cout << '\a'; // звуковий сигнал
    cout << "Помилка: невiдома команда.\n";
    break;
}

    cout << "Бажаєте завершити програму? (w/i для виходу, iнший символ — продовжити): ";
    cin >> exit_choice;

     }  while (exit_choice != 'w' && exit_choice != 'i') ;
       cout << "Програму завершено.\n";
     return 0;
}
