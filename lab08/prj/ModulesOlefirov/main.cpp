#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <cctype>
#include <ctime>
#include <sstream>
#include <bitset>
using namespace std;


// Функція для обчислення S

  double calculate_S(double x, double y, double z) {

// Перевірка на некоректне z

  if (z < 0) return -1;

// Обчислення знаменника

  double denominator = y + 4 * (pow(x, 3) + cos(z));

// Перевірка на ділення на 0 або від’ємне значення в корені

  if (denominator <= 0) return -1;

// Обчислення чисельника

  double numerator = 2 * M_PI * sqrt(0.5 * z);

// Рахує значення виразу під коренем

  double root_part = sqrt(numerator / denominator);

// Повертає результат виразу

  return pow(z + y + z, 2) - root_part;
}
void calculateGasPayment() {
  double volume = 0.0;
  cout << "Введiть об'єм газу: ";
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
    cout << "Цiна за використання газу: " << cost << endl << endl ;
}
 void findShoeSize(){
    double size_cm=0;
    cout << "Введiть розмip у сантиметрах: ";
    cin >> size_cm;
    int size_mm = size_cm * 10;
switch(size_mm){
case 205:
     cout << "Україна: -, Великобританiя: 1\n";
     break;
case 210:
     cout << "Україна: -, Великобританiя: 1.5\n";
     break;
case 215:
     cout << "Україна: -, Великобританiя: 2\n";
     break;
case 220:
     cout << "Україна: -, Великобританiя: 2.5\n";
     break;
case 225:
     cout << "Україна: -, Великобританiя: 3\n";
     break;
case 230:
     cout << "Україна: 35, Великобританiя: 4\n";
     break;
case 235:
     cout << "Україна: 36, Великобританiя: 4.5\n";
     break;
case 240:
     cout << "Україна: 36.5, Великобританiя: 5\n";
     break;
case 245:
     cout << "Україна: 37, Великобританiя: 5.5\n";
     break;
case 250:
     cout << "Україна: 38, Великобританiя: 6\n";
     break;
case 255:
     cout << "Україна: 38/39, Великобританiя: 6.5\n";
     break;
case 260:
     cout << "Україна: 40.5, Великобританiя: 7.5\n";
     break;
case 265:
     cout << "Україна: 41, Великобританiя: 8\n";
     break;
case 270:
     cout << "Україна: 41.5, Великобританя: 8.5\n";
     break;
case 275:
     cout << "Україна: 42, Великобританiя: 9\n";
     break;
case 280:
     cout << "Україна: 42/43, Великобританiя: 9.5\n";
     break;
case 285:
     cout << "Україна: 43, Великобританiя: 10\n";
     break;
case 290:
     cout << "Україна: 44, Великобританiя: 11\n";
     break;
case 295:
     cout << "Україна: 45, Великобританiя: 11.5\n";
     break;
case 300:
     cout << "Україна: 46, Великобританiя: 12\n";
     break;
case 305:
     cout << "Україна: 47, Великобританiя: 12.5\n";
     break;
case 310:
     cout << "Україна: 47.5, Великобританiя: 13\n";
     break;
case 315:
     cout << "Україна: 48, Великобританiя: 14\n";
     break;
case 320:
     cout << "Україна: 48.5, Великобританiя: 14.5\n";
     break;
default:
     cout << "Такого розмiру не iснує\n";
}
}
void processNumber() {
    unsigned int N;
    cout << endl << "Введiть натуральне число N (0..21359010): ";
    cin >> N;
    int count0 = 0, count1 = 0;
    unsigned int temp = N;

    // Підрахунок кількості нулів та одиниць у двійковому представленні
    while (temp > 0) {
        (temp % 2 == 0) ? count0++ : count1++;
        temp /= 2;
    }

    // Отримання 11-го біта справа
    bool bit11 = (N >> 11) & 1;

    // Вивід результату
    cout << "Результат: " << (bit11 ? count0 : count1) << endl;
}
// Перевірка на приголосні
bool isConsonant(char ch) {
    ch = tolower(ch);
    string cons = "бвгґджзйклмнпрстфхцчшщ";
    for (char c : cons) {
        if (ch == c) return true;
    }
    return false;
}

// Завдання 10.1
void processText(const string& inputFile, const string& outputFile) {
    ifstream in(inputFile);
    ofstream out(outputFile);

    if (!in.is_open() || !out.is_open()) {
        cout << "Помилка відкриття файлів!" << endl;
        return;
    }

    string word;
    in >> word;
    in.close();

    int count = 0;
    for (char ch : word) {
        if (isConsonant(ch)) count++;
    }

    string poem = "Про себе не кажи недобрих слів, "
                  "Бо має сказане таємну силу. "
                  "Кажи: «Я сильний, впевнений, щасливий!» "
                  "І буде саме так, як ти хотів!";

    bool found = (poem.find(word) != string::npos);

    out << "Автор: Олефіров Гліб, ЦНТУ, Кропивницький, Україна, 2025\n";
    out << "Слово: " << word << "\n";
    out << "Кількість приголосних: " << count << "\n";
    out << "Слово " << (found ? "є" : "немає") << " у вірші Іващенка.\n";

    out.close();
}

// Завдання 10.2
void appendInfoToFile(const string& filename) {
    ifstream inFile(filename);
    int charCount = 0;
    char ch;
    while (inFile.get(ch)) charCount++;
    inFile.close();

    time_t now = time(0);
    tm* localTime = localtime(&now);

    stringstream dateStream;
    dateStream << "Дата дозапису: "
               << (localTime->tm_mday < 10 ? "0" : "") << localTime->tm_mday << "."
               << (localTime->tm_mon + 1 < 10 ? "0" : "") << (localTime->tm_mon + 1) << "."
               << (1900 + localTime->tm_year) << " "
               << (localTime->tm_hour < 10 ? "0" : "") << localTime->tm_hour << ":"
               << (localTime->tm_min < 10 ? "0" : "") << localTime->tm_min << ":"
               << (localTime->tm_sec < 10 ? "0" : "") << localTime->tm_sec;

    ofstream outFile(filename, ios::app);
    outFile << "\nКількість символів: " << charCount << endl;
    outFile << dateStream.str() << endl;
    outFile.close();
}
void processTask10_3(double x, double y, double z, int b, const string& outputFilename) {
    double result = calculate_S(x, y, z);
    bitset<8> binaryB(b);

    ofstream outFile(outputFilename, ios::app);
    outFile << "\n=== Результат задачі 10.3 ===\n";
    outFile << "s_calculation(x, y, z) = " << result << endl;
    outFile << "Число b у двійковій системі: " << binaryB << endl;
    outFile.close();
}
