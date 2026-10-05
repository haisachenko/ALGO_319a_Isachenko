#include <iostream>
#include <cmath>// підключення бібліотеки математичних функцій
using namespace std;
int main()
{
// Integer31.
// Дано будь-яке число.
// Вивести другу цифру справа (розряд десятків).

cout << "Integer31." << endl;
int inputNumber, result; // декларація цілих змінних
// введення данних
cout << endl << "Число = "; cin >> inputNumber;
// Math magic
result = inputNumber / 10 % 10;
// виведення результату
cout << "Десятки = " << result << endl;

// Boolean 7
// Дано три цілих числа: A, B, C. 
// Перевірити істинність висловлювання:
// «Число B знаходиться між числами A і C».

cout << "Boolean7." << endl;
int inputA, inputB, inputC;
// введенняя данних
cout << "Число A = "; cin >> inputA;
cout << "Число B = "; cin >> inputB;
cout << "Число C = "; cin >> inputC;
// Перевірка
bool is_between = inputA < inputB && inputB < inputC; // логічна змінна
// Відповідь
cout << "Число B знаходится між числами A і C? " << boolalpha << is_between << endl;


// Math21

double x, num, denom, sinx, tgx, cosx, y; // декларація дійсних змінних
// Введення данних
cout << "X = "; cin >> x;
// Підрахунок
sinx = sin(x);
tgx = tan(x);
cosx = cos(x-12);
num = cbrt(abs(pow(x, 2)-2*abs(sinx)*3*tgx)*pow(5, cosx)); // Чисельник
denom = 0.6+4*log2(x+15); // Знаменник
y = num/denom;
// Результат
cout << "Y = " << y << endl;

return 0;
}
