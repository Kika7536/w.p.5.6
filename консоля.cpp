#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	cout << "Задание 6. Вклады" << endl;
	cout << "-------------------------------------" << endl << endl;

	int x, y, p, res = 0;
	bool check = true;


	while (check) {
		cout << "Введите размер вклада: ";
		cin >> x;

		cout << "Введите процентную ставку: ";
		cin >> y;

		cout << "Введите желаемую сумму: ";
		cin >> p;


		if (x < 0) {
			cout << "Вклад не может иметь отрицательное значение" << endl ;
		}
		else if (x == 0) {
			cout << "Вклад не может иметь нулевое значение" << endl;
		}
		else if (y < 0) {
			cout << "Ставка не может иметь отрицательное значение" << endl;
		}
		else if (y == 0) {
			cout << "Ставка не может иметь нулевое значение" << endl;
		}else if (y < 0) {
			cout << "Ставка не может иметь отрицательное значение" << endl;
		}
		else if (x > p) {
			cout << "В банке вложенные деньги могут только увеличиваться" << endl;
		}
		else {
			check = false;
		}
	}

	while (x < p) {
		x = x + x / y;
		res++;
	}

	cout << "Придется подождать: " << res;

	if (res % 10 == 1) {
		cout << " год." << endl;
	}
	else if (res % 10 > 1 && res % 10 <= 4) {
		cout << " года." << endl;
	}
	else {
		cout << " лет." << endl;
	}

	

	cout << "Введите любую клавишу, чтобы выйти из программы";
	cin >> x;
	
}