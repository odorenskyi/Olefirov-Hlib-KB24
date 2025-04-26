#include <iostream>
#include "ModulesOlefirov.h"
#include <fstream>
#include <string>
#include <cassert>
#include <locale.h>



using namespace std;

// Функція для перевірки чи файл містить потрібний текст
bool fileContains(const string& filename, const string& text) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        if (line.find(text) != string::npos) return true;
    }
    return false;
}

int main() {

setlocale(LC_ALL, "ukr");

    cout << "===  Тестування завдань 10.1 10.2 10.3 ===\n";

    // ---------- Тести для задачі 10.1 ----------
    cout << "\nТест 10.1: аналіз слів\n";

    string words[] = {"щасливий", "любов", "віра"};
    for (int i = 0; i < 3; ++i) {
        string input = "input_task_10.1_" + to_string(i+1) + ".txt";
        string output = "output_task_10.1_" + to_string(i+1) + ".txt";

        ofstream f(input);
        f << words[i];
        f.close();

        processText(input, output);

        assert(fileContains(output, "Кількість приголосних"));
        assert(fileContains(output, "Слово"));
        cout << "Тест 10.1 #" << i+1 << " пройдено \n";
    }

    // ---------- Тести для задачі 10.2 ----------
    cout << "\nТест 10.2: допис інформації у файл\n";

    string initialTexts[] = {"", "Тест!", "Не придумав  тексту для перевірки"};

    for (int i = 0; i < 3; ++i) {
        string filename = "output_task_10.2_" + to_string(i+1) + ".txt";
        ofstream f(filename);
        f << initialTexts[i];
        f.close();

        appendInfoToFile(filename);

        assert(fileContains(filename, "Кількість символів"));
        assert(fileContains(filename, "Дата дозапису"));
        cout << "Тест 10.2 #" << i+1 << " пройдено \n";
    }

    // ---------- Тести для задачі 10.3 ----------
    cout << "\nТест 10.3: обчислення S і двійкове представлення\n";

    struct TestData {
        double x, y, z;
        int b;
    } testData[] = {
        {1, 2, 3, 5},   // звичайний випадок
        {0, 1, 2, 15},  // x=0
        {1, 2, -1, 7}   // z<0 (некоректне z)
    };

    for (int i = 0; i < 3; ++i) {
        string filename = "output_task_10.3_" + to_string(i+1) + ".txt";

        processTask10_3(testData[i].x, testData[i].y, testData[i].z, testData[i].b, filename);

        assert(fileContains(filename, "s_calculation"));
        assert(fileContains(filename, "Число b у двійковій системі"));
        cout << "Тест 10.3 #" << i+1 << " пройдено \n";
    }

    cout << "\nУсі тести пройдені успішно! \n";
    return 0;
}
