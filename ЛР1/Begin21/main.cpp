
#include <iostream>
using namespace std;

int main()
{
    // Задача Begin 21
    // Змінні першої задачі
    double rad, degrees, pi = 3.14;
    // Введення змінних
    cout <<"Введіть кут в радіанах: ";
    cin >> rad;
    // Розрахунок градусів
    degrees = rad * (180/pi);
    // Виведення результатів
    cout <<"Градуси = "<<degrees<<endl;
    

    return 0;
}
