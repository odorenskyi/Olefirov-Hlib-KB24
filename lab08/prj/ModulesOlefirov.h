#ifndef MODULESOLEFIROV_H_INCLUDED
#define MODULESOLEFIROV_H_INCLUDED
#include <string>
#include <stdexcept>
#include <cmath>

double calculate_S(double x, double y, double z);
void findShoeSize();
void processNumber();
void calculateGasPayment();

#include <string>   // для std::string

// Функція для задачі 10.1 — обробка слова з тексту
void processText(const std::string& inputFile, const std::string& outputFile);

// Функція для задачі 10.2 — дописати кількість символів і дату
void appendInfoToFile(const std::string& filename);

// Функція для задачі 10.3 — обчислення значення та вивід двійкового b
void processTask10_3(double x, double y, double z, int b, const std::string& outputFilename);


class ClassLab12_Olefirov {
private:
    double a; // велика піввісь
    double b; // мала піввісь

public:
    // Конструктор за замовчуванням
    ClassLab12_Olefirov() {
        a = 1.0;
        b = 1.0;
    }

    // Конструктор з параметрами
    ClassLab12_Olefirov(double a_, double b_) {
        setA(a_);
        setB(b_);
    }

    // Гетер для a
    double getA() const {
        return a;
    }

    // Гетер для b
    double getB() const {
        return b;
    }

    // Сетер для a з перевіркою
    void setA(double a_ = 1.0) {
        if (a_ <= 0)
            throw std::invalid_argument("Параметр a має бути додатнім.");
        a = a_;
    }

    // Сетер для b з перевіркою
    void setB(double b_ = 1.0) {
        if (b_ <= 0)
            throw std::invalid_argument("Параметр b має бути додатнім.");
        b = b_;
    }

    // Обчислення площі еліпса
    double area() const {
        return M_PI * a * b;
    }
};





#endif // MODULESOLEFIROV_H_INCLUDED
