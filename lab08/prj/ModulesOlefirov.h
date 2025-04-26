#ifndef MODULESOLEFIROV_H_INCLUDED
#define MODULESOLEFIROV_H_INCLUDED
#include <string>

double calculate_S(double x, double y, double z);
void findShoeSize();
void processNumber();
void calculateGasPayment();

#include <string>   // дл€ std::string

// ‘ункц≥€ дл€ задач≥ 10.1 Ч обробка слова з тексту
void processText(const std::string& inputFile, const std::string& outputFile);

// ‘ункц≥€ дл€ задач≥ 10.2 Ч дописати к≥льк≥сть символ≥в ≥ дату
void appendInfoToFile(const std::string& filename);

// ‘ункц≥€ дл€ задач≥ 10.3 Ч обчисленн€ значенн€ та вив≥д дв≥йкового b
void processTask10_3(double x, double y, double z, int b, const std::string& outputFilename);


#endif // MODULESOLEFIROV_H_INCLUDED
