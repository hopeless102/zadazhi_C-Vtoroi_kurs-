#include <iostream>
#include <cmath>
using  namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a = 30;
	int b = 5;
	int c = 0;
	cout << " a + b =";
	c = a + b;
	cout << c;


	c = 0;

	cout << "\n a - b =";
	c = a - b;
	cout << c;

	c = 0;

	cout << "\n a * b =";
	c = a * b;
	cout << c;


	c = 0;

	cout << "\n a / b =";
	c = a / b;
	cout << c; 



	//zadanie 7
	
	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;
	float e = 0;
	float r = 0;
	cout << "Введите количество литров воды номер 1  ";
		cin >> a ;

	cout << "Введите температуру воды номер 1 ";
		cin >> b;


	cout << "Введите количество литров воды номер 2 ";
		cin >> c;

	cout << "Введите температуру воды номер 2 ";
	    cin >> d;
    

	cout << "Объем смеси: ";
		e = a + c;
		 cout << e;

	cout << "\n Температура смеси: ";
		r = b + d;
		 cout<< r;

	//zadanie 23в НЕДОДЕЛАНО
	
	float q = 0;
	float w = 0;
	float e = 0;

	cout << "Введите сторону 1 - ";
		cin >> q;

	cout << "Введите сторону 2- ";
		cin >> w;
	
	cout << "Введите сторону 3 - ";
		cin >> e;
	

	return 0;
}
