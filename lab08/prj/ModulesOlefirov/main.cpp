#include <iostream>
#include <cmath>

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
