#ifndef MODULESOLEFIROV_H_INCLUDED
#define MODULESOLEFIROV_H_INCLUDED
#include <string>
#include <stdexcept>
#include <cmath>

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


class ClassLab12_Olefirov {
private:
    double a; // ������ �����
    double b; // ���� �����

public:
    // ����������� �� �������������
    ClassLab12_Olefirov() {
        a = 1.0;
        b = 1.0;
    }

    // ����������� � �����������
    ClassLab12_Olefirov(double a_, double b_) {
        setA(a_);
        setB(b_);
    }

    // ����� ��� a
    double getA() const {
        return a;
    }

    // ����� ��� b
    double getB() const {
        return b;
    }

    // ����� ��� a � ���������
    void setA(double a_ = 1.0) {
        if (a_ <= 0)
            throw std::invalid_argument("�������� a �� ���� �������.");
        a = a_;
    }

    // ����� ��� b � ���������
    void setB(double b_ = 1.0) {
        if (b_ <= 0)
            throw std::invalid_argument("�������� b �� ���� �������.");
        b = b_;
    }

    // ���������� ����� �����
    double area() const {
        return M_PI * a * b;
    }
};





#endif // MODULESOLEFIROV_H_INCLUDED
