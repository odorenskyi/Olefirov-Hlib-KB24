#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>
#include "ModulesOlefirov.h"
#include <locale.h>

std::string getExeDir() {
    char exePath[MAX_PATH];
    GetModuleFileNameA(NULL, exePath, MAX_PATH);
    std::string fullPath(exePath);
    size_t pos = fullPath.find_last_of("\\/");
    if (pos != std::string::npos) {
        return fullPath.substr(0, pos);
    }
    return "";
}

void runTests(const std::string& testPath, const std::string& resultPath) {
    std::ifstream testFile(testPath);
    std::ofstream resultFile(resultPath, std::ios::app);  // Додає до файлу

    if (!testFile.is_open()) {
        resultFile << "Не вдалося відкрити файл тестів: " << testPath << std::endl;
        return;
    }

    resultFile << "Тестування файлу: " << testPath << std::endl;

    ClassLab12_Olefirov obj;
    std::string line;
    while (std::getline(testFile, line)) {
        std::stringstream ss(line);
        std::string id, action;
        double value;

        std::getline(ss, id, ';');
        std::getline(ss, action, ';');
        ss >> value;

        resultFile << "Test Case ID: " << id
                   << " | Action: " << action
                   << " | Expected: " << value;

        try {
            if (action == "setA") {
                obj.setA(value);
                resultFile << " | Result: passed" << std::endl;
            } else if (action == "setB") {
                obj.setB(value);
                resultFile << " | Result: passed" << std::endl;
            } else if (action == "area") {
                double actual = obj.area();
                resultFile << " | Actual: " << actual
                           << " | Result: "
                           << (std::abs(actual - value) < 0.1 ? "passed" : "FAIL") << std::endl;
            } else {
                resultFile << " | Unknown action!" << std::endl;
            }
        } catch (const std::exception& ex) {
            resultFile << " | ВИНЯТОК: " << ex.what() << std::endl;
        }
    }

    resultFile << std::endl;
    testFile.close();
    resultFile.close();
}

int main() {
    setlocale(LC_ALL, "UKR");

    std::string testInput = "E:\\Project\\Olefirov-Hlib-KB24\\lab8\\Olefirov-Hlib-KB24\\lab12\\TestSuite\\test2.txt";
    std::string testOutput = "E:\\Project\\Olefirov-Hlib-KB24\\lab8\\Olefirov-Hlib-KB24\\lab12\\TestSuite\\TestResults.txt";

    runTests(testInput, testOutput);

    std::cout << "Тестування завершено. Перевірте файл: " << testOutput << std::endl;
    std::cout << "Натисніть будь-яку клавішу для виходу..." << std::endl;
    std::cin.get();

    return 0;
}
