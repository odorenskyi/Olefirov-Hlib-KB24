#include <iostream>
#include <cmath>
#include "ModulesOlefirov.h"
#include <locale.h>

using namespace std;

int main() {
  setlocale(LC_ALL , "ukr");
  double x, y, z;
  cout << "����i�� x, y, z: ";
  cin >> x >> y >> z;
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
