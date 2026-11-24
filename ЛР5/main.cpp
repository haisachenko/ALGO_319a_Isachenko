#include <iostream>
#include <cmath>
using namespace std;

//Оголошення функцій

// Figure35.
//

void task_Figure35(); // завдання 1 декларація функції

// Series25.
// 

void task_Series25(); // завдання 2 декларація функції

// Convergence26.
// 
void task_Convergence26(); // завдання 3 декларація функції

int main () {
int menu; // змінна для номера завдання
do
{// початок циклу
cout << "Please select task: " << endl << "1. Figure35" << endl << "2. Series25" << endl << "3. Convergence26" << endl;
cin >> menu; // Щоб вибрати номер завдання
switch (menu) {
case 1: task_Figure35(); break; // 1 - завдання 1
case 2: task_Series25(); break; // 2 - завдання 2
case 3: task_Convergence26(); break; // 3 - завдання 3
case -1: cout << "Exit ..." << endl; break; // - 1 - вихід
// інший номер - повторити
default: cout << "Invalid Task. (Select 1, 2 or 3)" << endl;

}
} // кінець циклу
while (menu != -1); // умова виконання: поки не -1
return 0;
}


// Завдання 1
void task_Figure35()
{
    cout << "dick" << endl;
}

void task_Series25()
{
// declaration
    int n; double x; double k; double result; double calcTop; double calcFinal;
    k = 0;
    cout << "Input x and n" << endl;
    cin >> x >> n;
    result = x;
    for (int j = 1; j <=n; j++) {
        calcTop = pow(-1, k)*pow((-(M_PI)/2+sqrt(x)), (1+(2*k))); // <--- the top of it
        calcFinal = pow((calcTop / 1), x); // <--- Actual Loop. Note: (2*k)! = 1.
    }
    cout << "The answer is " << -0.5 + calcFinal << endl;
    return;
}

void task_Convergence26()
{
    
}
