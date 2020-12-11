// Lab_03_4.cpp
//  < Сорочак Станіслав >
// Лабораторна робота № 3.4
// Варіант 24

#include <iostream>
using namespace std;

int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// Розгалуження в повній формі

	if (((y <= sqrt(pow(R, 2) - pow(x, 2))) && y >= 0 ||
		(y <= x && y >= -R && x <= 0)))
	cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}