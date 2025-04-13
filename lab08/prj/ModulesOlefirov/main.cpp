#include <iostream>
#include <cmath>

using namespace std;


// ������� ��� ���������� S

  double calculate_S(double x, double y, double z) {

// �������� �� ���������� z

  if (z < 0) return -1;

// ���������� ����������

  double denominator = y + 4 * (pow(x, 3) + cos(z));

// �������� �� ������ �� 0 ��� �䒺��� �������� � �����

  if (denominator <= 0) return -1;

// ���������� ����������

  double numerator = 2 * M_PI * sqrt(0.5 * z);

// ���� �������� ������ �� �������

  double root_part = sqrt(numerator / denominator);

// ������� ��������� ������

  return pow(z + y + z, 2) - root_part;
}
void calculateGasPayment() {
  double volume = 0.0;
  cout << "����i�� ��'�� ����: ";
  cin >> volume ;
  double cost = 0.0;
  if (volume <= 208) {
    cost = volume * 1.299;
}
    else if (volume <= 500) {
      cost = 208 * 1.299 + (volume - 208) * 1.788;
}
      else {
        cost = 208 * 1.299 + (500 - 208) * 1.788 + (volume - 500) * 3.645;
}
    cout << "�i�� �� ������������ ����: " << cost << endl << endl ;
}
 void findShoeSize(){
    double size_cm=0;
    cout << "����i�� ����ip � �����������: ";
    cin >> size_cm;
    int size_mm = size_cm * 10;
switch(size_mm){
case 205:
     cout << "������: -, ������������i�: 1\n";
     break;
case 210:
     cout << "������: -, ������������i�: 1.5\n";
     break;
case 215:
     cout << "������: -, ������������i�: 2\n";
     break;
case 220:
     cout << "������: -, ������������i�: 2.5\n";
     break;
case 225:
     cout << "������: -, ������������i�: 3\n";
     break;
case 230:
     cout << "������: 35, ������������i�: 4\n";
     break;
case 235:
     cout << "������: 36, ������������i�: 4.5\n";
     break;
case 240:
     cout << "������: 36.5, ������������i�: 5\n";
     break;
case 245:
     cout << "������: 37, ������������i�: 5.5\n";
     break;
case 250:
     cout << "������: 38, ������������i�: 6\n";
     break;
case 255:
     cout << "������: 38/39, ������������i�: 6.5\n";
     break;
case 260:
     cout << "������: 40.5, ������������i�: 7.5\n";
     break;
case 265:
     cout << "������: 41, ������������i�: 8\n";
     break;
case 270:
     cout << "������: 41.5, �������������: 8.5\n";
     break;
case 275:
     cout << "������: 42, ������������i�: 9\n";
     break;
case 280:
     cout << "������: 42/43, ������������i�: 9.5\n";
     break;
case 285:
     cout << "������: 43, ������������i�: 10\n";
     break;
case 290:
     cout << "������: 44, ������������i�: 11\n";
     break;
case 295:
     cout << "������: 45, ������������i�: 11.5\n";
     break;
case 300:
     cout << "������: 46, ������������i�: 12\n";
     break;
case 305:
     cout << "������: 47, ������������i�: 12.5\n";
     break;
case 310:
     cout << "������: 47.5, ������������i�: 13\n";
     break;
case 315:
     cout << "������: 48, ������������i�: 14\n";
     break;
case 320:
     cout << "������: 48.5, ������������i�: 14.5\n";
     break;
default:
     cout << "������ ����i�� �� i���\n";
}
}
void processNumber() {
    unsigned int N;
    cout << endl << "����i�� ���������� ����� N (0..21359010): ";
    cin >> N;
    int count0 = 0, count1 = 0;
    unsigned int temp = N;

    // ϳ�������� ������� ���� �� ������� � ��������� ������������
    while (temp > 0) {
        (temp % 2 == 0) ? count0++ : count1++;
        temp /= 2;
    }

    // ��������� 11-�� ��� ������
    bool bit11 = (N >> 11) & 1;

    // ���� ����������
    cout << "���������: " << (bit11 ? count0 : count1) << endl;
}

