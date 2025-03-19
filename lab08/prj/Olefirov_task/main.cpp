#include <iostream>
#include <cmath>
#include "ModulesOlefirov.h"
#include <windows.h>

using namespace std;

// ������� ��� ������ ���������� ��� ������ all rights reserved

void Annotation() {
    cout <<"==================================================================="<< endl;
    cout <<"| #   *  #  *      Developer: Olefirov Glib    *   #    *   *  #  |"<< endl;
    cout <<"|  *    *   #      ���������: �������� ���            *   #      |"<< endl;
    cout <<"| #  *  # *          all rights reserved �      #  *  *    #      |"<< endl;
    cout <<"==================================================================="<< endl;
}

// ������� ��� ���������� �������� ������
bool Logic(char a, char b) {
  return (a + 1 < b);  // ������� true ��� false
}

// ������� ��� ������� ����� �� �� ������

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

  // �������� ����� ������������

  cout << "����i�� x, y, z: ";
  cin >> x >> y >> z;
  cout << "����i�� ������� a i b: ";
  cin >> a >> b;


  // ��������� �������

  cout << "��������� ���i����� ������ (1/0): " << Logic(a, b) << endl;
  processNumbers(x, y, z);
  double result = calculate_S(x, y, z);
  if (result == -1)
{
  cout << "�������: ����������i ��i��i ���i!" << endl;
}   else
{
  cout << "��������� S: " << result << endl;
}
  return 0;
}
