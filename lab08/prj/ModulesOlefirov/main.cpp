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
