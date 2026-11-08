#include <iostream>
#include <cmath>
using namespace std;

//Оголошення функцій

double CompoundInterest(double P, double r, double n, double A) { // фунція для Proc25
    return A = P * pow((1+r), n);
    
};

double RadToDeg(double R) { // функція для Proc42
    if (R >= 0 || R < 2*3.14) {
        return (R*180)/3.14;
    }
    else return 0;
    
};

// Функції для integer31

bool FuncInput (int & num); // введення з перевіркою
int FindScndDigit (int num); // знайдення десятків
void OutResult (int res); // виведення результату

// Proc25.
//Описати процедуру CompoundInterest(P, r, n, A), яка обчислює
//майбутню вартість інвестицій A за формулою складних відсотків:
//A = P·(1 + r)n, де P - початкова сума, r - річна процентна ставка, n -
//кількість років (P, r, n - вхідні, A - вихідний параметр дійсного
//типу). За допомогою цієї процедури знайти майбутні вартості для
//трьох різних інвестицій.
void task_Proc25(); // завдання 1 декларація функції

// Proc42
// Описати функцію RadToDeg (R) дійсного типу, яка знаходить
//величину кута в градусах, якщо дана його величина R в радіанах (R
//- дійсне число, 0 ≤ R <2 · π). Скористатися таким співвідношенням:
//180 ° = π радіанів. Як значення π вважати рівним 3.14. За
//допомогою функції RadToDeg перевести з радіанів в градуси п'ять
//даних кутів.

void task_Proc42(); // завдання 2 декларація функції

// Integer31
// Дано будь-яке число. Вивести другу цифру справа (розряд десятків).

void task_Integer31(); // завдання 3 декларація функції

int main() {
	int menu;
	cout << "Please select task: " << endl << "1. Proc25" << endl << "2. Proc42" << endl << "3. Integer31" << endl;
	cin >> menu;
	// перемикання між завданнями
	switch (menu)
	{
	case 1:
		task_Proc25(); // Завдання 1
		break; 
	case 2:
		task_Proc42(); // Завдання 2
		break; 
	case 3:
		task_Integer31(); // Завдання 3
		break; 
	default:
		cout << "Input outside available options. (Select 1, 2 or 3)" << endl; //повідомлення про помилку
	}
	return 0;
}

// Завдання 1
void task_Proc25()
{
    // Вводимо дані для трьох інвестицій. Для зручності робимо це три різні рази.
	double P1, r1, n1, A;
	cout << "Investment 1. Input initial investment (P), the interest rate (r, where 1% would be 0.01), and the amount of years (n)";
    cin >> P1 >> r1 >> n1;
    
    double P2, r2, n2;
    cout << "Investment 2. Input initial investment (P), the interest rate (r, where 1% would be 0.01), and the amount of years (n)";
    cin >> P2 >> r2 >> n2;
    
    double P3, r3, n3;
    cout << "Investment 3.Input initial investment (P), the interest rate (r, where 1% would be 0.01), and the amount of years (n)";
    cin >> P3 >> r3 >> n3;
    
    cout << "Your investments grow to:" << endl; // Виводимо результати.
    
    cout << CompoundInterest(P1, r1, n1, A) << endl;
    cout << CompoundInterest(P2, r2, n2, A) << endl;
    cout << CompoundInterest(P3, r3, n3, A) << endl;
}

void task_Proc42()
{
	double R1, R2, R3, R4, R5;
	cout << "Go ahead and input five radians:" << endl; // Вводимо радіани, тут легше зробити це один раз і забути
    cin >> R1 >> R2 >> R3 >> R4 >> R5;
    
    cout << "Your radians become:" << endl;
    
    cout << R1 << " --> " << RadToDeg(R1) << " degrees" << endl; // Виконуємо функцію 5 разів.
    cout << R2 << " --> " << RadToDeg(R2) << " degrees" << endl;
    cout << R3 << " --> " << RadToDeg(R3) << " degrees" << endl;
    cout << R4 << " --> " << RadToDeg(R4) << " degrees" << endl;
    cout << R5 << " --> " << RadToDeg(R5) << " degrees" << endl;
}

void task_Integer31()
{
    int num;
    if (FuncInput(num))
        cout << "Input must be integer." << endl;
    else
        OutResult(FindScndDigit(num));
}
// Декларація функцій Integer31
bool FuncInput (int & num)
{
    cout << endl << "Input your number (must be integer): ";
    cin >> num;
    if (cin.fail()) // Перевірка вводу
        return true;
    else if (num < 0)
    {
        num = -num;
        return false;
    }
    else return false;
}

int FindScndDigit (int num)
    {
        return num / 10 % 10; // Розрахунок.
    }
    
void OutResult (int res) // Вивод результату
{
    cout << "The second digit is " << res << endl;
}
