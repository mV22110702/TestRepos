﻿// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main() {
	


	double a, b, c, x;
	double f;
	cin >> a >> b >> c >> x;
	if ((x + b < 10) && (b != 0)) {
	if ( c!=0 ) { 
	f = pow(a, 3) * pow(x, 2) - b / c;
	cout << "f= " << f;
	}
	else { cout << "Помилка (с==0)"; }
	}
	else if ((x + b > 10) && (b == 0)) {
		if ( (x-c)!=0 ) { 
			f = a + (b - a) / (x - c);
			cout << "f= " << f;
		}
		else { cout << "Error ((x-c)==0)"; }
	}
	else {
		if ( c!=0 ) { 
		f = x / pow(c, 3); 
		cout << "f= " << f; }
		else { cout << "Error (с==0)"; }
	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
