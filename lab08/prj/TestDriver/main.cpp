#include <iostream>
#include <cmath>
#include "ModulesOlefirov.h"
#include <locale.h>

using namespace std;

int main() {
  setlocale(LC_ALL , "ukr");
  double x, y, z;
  cout << "Введiть x, y, z: ";
  cin >> x >> y >> z;
  double result = calculate_S(x, y, z);
  if (result == -1)
{
  cout << "Помилка: недопустимi вхiднi данi!" << endl;
}   else
{
    cout << "Результат S: " << result << endl;
}
  return 0;
}
