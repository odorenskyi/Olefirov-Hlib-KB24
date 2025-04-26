#ifndef MODULESOLEFIROV_H_INCLUDED
#define MODULESOLEFIROV_H_INCLUDED
#include <string>

double calculate_S(double x, double y, double z);
void findShoeSize();
void processNumber();
void calculateGasPayment();

#include <string>   // ��� std::string

// ������� ��� ������ 10.1 � ������� ����� � ������
void processText(const std::string& inputFile, const std::string& outputFile);

// ������� ��� ������ 10.2 � �������� ������� ������� � ����
void appendInfoToFile(const std::string& filename);

// ������� ��� ������ 10.3 � ���������� �������� �� ���� ��������� b
void processTask10_3(double x, double y, double z, int b, const std::string& outputFilename);


#endif // MODULESOLEFIROV_H_INCLUDED
