/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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