#include <iostream>
#include <cmath>
using namespace std;

// If25.
//Для даного цілого x знайти значення наступної функції f,
//що приймає значення цілого типу:
//f(x) = { −3 ⋅ x, якщо x ∈ [−2, 2], 2 ⋅ x, якщо x ∈ (−∞, −2) ∪ (2, ∞).

void task_if25(); // завдання 1 декларація функції

// If6
// Дано два числа. Вивести більше з них.

void task_if6(); // завдання 2 декларація функції

// Geom35
// Дано координати точки (x, y) та радіус (r)
// Визначити чи входить точка до фігур заданого кольору
// Вивести відповідне повідомлення.

void task_geom35(); // завдання 3 декларація функції

int main() {
	int menu;
	cout << "Task number (1, 2, 3): ";
	cin >> menu;
	// перемикання між завданнями
	switch (menu)
	{
	case 1:
		task_if25();
		break; // Завдання 1
	case 2:
		task_if6();
		break; // Завдання 2
	case 3:
		task_geom35();
		break; // Завдання 3
	default:
		cout << "Input outside available options. (Select 1, 2 or 3)" << endl; //повідомлення про помилку
	}
	return 0;
}

// Завдання 1
void task_if25()
{
	int x, func;
	cout << "- If 25 -" << endl;
	cout << "Please input integer for x: ";
	cin >> x;

	if (cin) {
		if (x <= 2 && x >= -2)
			func = -3 * x;
		else
			func = 2*x;
		cout << func;
	}
	else
		cout << "What the fuck are you on about" << endl;


}

// Завдання 2
void task_if6()
{
	int A, B;
	cout << "- If 6 -" << endl;
	
	// Ввод змінних
	cout << "Input the first value: " << endl;
	cin >> A;
	cout << "Input the second value: " << endl;
	cin >> B;
	
	// Порівняння через if
	if (cin) {
		if (A > B)
			cout << A << " is the larger value.";
		else if (B>A)
			cout << B << " is the larger value.";
	}
	else
		cout << "Your input was not a number. Please input a whole number" << endl;
}

// Завдання 3
void task_geom35()
{
	double r;
	double x, y;
	cout << "- Geom 35 -" << endl;
	
	// Ввод змінних
	cout << "Input radius: ";
	cin >> r;
	
	// Перевірка радіусу через if
	if (cin.fail() || r <= 0)
	{
		cerr << "Please input a positive radius";
		return;
	}
	cout << "Input coordinates (x, y): ";
	cin >> x >> y;
	// Перевірка координатів
	if (!cin)
	{
		cout << "Please enter a number for the coordinates." << endl;
		return;
	}
	// Розрахунок
    double R2 = pow(r,2);
    double side = sqrt((pow(r,2)/2));
	double circle = pow(x-side, 2) + pow(y-side,2);

	bool inInadequateShape =  x <= 0 && y >= 0 && circle <= r * r;
	bool inTriangle = x <= 0 && y <= 0 && x + y >= -side;
	
	// Виведення результату
	if (inInadequateShape || inTriangle) 
	    cout << "The point is in the yellow area." << endl;
	else
	    cout << "The point isn't in the yellow area.";
    return
}
