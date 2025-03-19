#include <iostream>
#include <cmath>
#include "ModulesOlefirov.h"
#include <windows.h>

using namespace std;

// Функція для виводу інформації про автора all rights reserved

void Annotation() {
    cout <<"==================================================================="<< endl;
    cout <<"| #   *  #  *      Developer: Olefirov Glib    *   #    *   *  #  |"<< endl;
    cout <<"|  *    *   #      Розробник: Олефіров Гліб            *   #      |"<< endl;
    cout <<"| #  *  # *          all rights reserved ©      #  *  *    #      |"<< endl;
    cout <<"==================================================================="<< endl;
}

// Функція для обчислення логічного виразу
bool Logic(char a, char b) {
  return (a + 1 < b);  // Повертає true або false
}

// Функція для обробки чисел та їх виводу

void processNumbers(int x, int y, int z) {
   cout << "x = " << x << " (0x" << hex << x << dec << ")" << endl;
   cout << "y = " << y << " (0x" << hex << y << dec << ")" << endl;
   cout << "z = " << z << " (0x" << hex << z << dec << ")" << endl;
}
int main() {
  SetConsoleOutputCP(1251);
  Annotation();
  double x, y, z;
  char a, b;

  // Введення даних користувачем

  cout << "Введiть x, y, z: ";
  cin >> x >> y >> z;
  cout << "Введiть символи a i b: ";
  cin >> a >> b;


  // Виконання підзадач

  cout << "Результат логiчного виразу (1/0): " << Logic(a, b) << endl;
  processNumbers(x, y, z);
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
