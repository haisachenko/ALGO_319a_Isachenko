
#include <iostream>
using namespace std;

int main()
{
    // Задача Begin 23
    // Змінні  другої задачі
    double tcelsius, tfarhrenheit;
    // Введення змінних
    cout <<"Температура за цельсієм: ";
    cin >> tcelsius;
    // Розрахунок температури
    tfarhrenheit = ((tcelsius*9)/5) + 32;
    // Виведення результатів
    cout  <<tcelsius<<" за цельсієм = "<<tfarhrenheit<<" за фаренгейтом."<<endl;

    return 0;
}
