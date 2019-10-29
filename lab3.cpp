// lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

void inputSize(int&);
double** createMassiv(const int&);
void fillMassiv(double**, const int&);
void coutMassiv(double**, const int&);
void func(double**, const int&);
void clearMassiv(double**, const int&);

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	inputSize(n);

	double** A = createMassiv(n);
	double** B = createMassiv(n);
	double** C = createMassiv(n);

	fillMassiv(A, n);
	fillMassiv(B, n);

	cout << "Массив A: " << endl;
	coutMassiv(A, n);
	cout << "Массив B: " << endl;
	coutMassiv(B, n);


	cout << "результат функции для массива A: " << endl;
	func(A, n);
	cout << "результат функции для массива B: " << endl;
	func(B, n);

	clearMassiv(A, n);
	clearMassiv(B, n);
	clearMassiv(C, n);
}

void inputSize(int& n) {
	cout << "Enter \"N\" " << endl;
	cin >> n;
	if (n <= 0) {
		cout << "ERROR!!!" << endl; // Размер масива должен быть положитлеьным
		inputSize(n);
	}
}

double** createMassiv(const int& n) {
	double** p;
	p = new double* [n];
	for (int i = 0; i < n; i++) {
		p[i] = new double[n];
	}
	return p;
}

void fillMassiv(double** p, const int& n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			p[i][j] = 1 + rand() % 5;
		}
	}
}

void coutMassiv(double** p, const int& n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
}

void func(double** p, const int& n) {
	double max;
	for (int i = 0; i < n; i++) {
		max = p[i][0];
		for (int j = 1; j < n; j++) {
			if (p[i][j] > max) {
				max = p[i][j];
			}
		}
		cout << "В строке[" << i+1 << "] максимальный элемент: " << max << endl;
	}
}

void clearMassiv(double** p, const int& n) {
	for (int i = 0; i < n; i++)
		delete[] p[i];
	delete[] p;
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
