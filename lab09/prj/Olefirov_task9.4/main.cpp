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
    cout << "����i�� �����(u, t, r, e): ";
    cin >> letter;
switch(letter){

case'u':{
     double x, y, z;
    cout << endl << "����i�� x, y, z: ";
    cin >> x >> y >> z;
    double result = calculate_S(x, y, z);
    cout << endl << "��������� ����������: " << result << endl;
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
    cout << '\a'; // �������� ������
    cout << "�������: ���i���� �������.\n";
    break;
}

    cout << "������ ��������� ��������? (w/i ��� ������, i���� ������ � ����������): ";
    cin >> exit_choice;

     }  while (exit_choice != 'w' && exit_choice != 'i') ;
       cout << "�������� ���������.\n";
     return 0;
}
