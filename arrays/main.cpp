#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "");
	const int SIZE = 5;
	int A[SIZE] = {}, max = 0, min = 0;
	double sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> A[i];
		cout << A[i] << "\t";
		sum += A[i];
	}
	cout << endl;
	max = min = A[0];
	for (int i = 0; i < SIZE; i++)
	{
		cout << A[SIZE - 1 - i] << "\t";
		if (A[i] > max)
			max = A[i];
		if (A[i] < min)
			min = A[i];
	}
	cout << endl;
	cout << "Сумма равна: " << sum << endl;
	cout << "Среднее арифметическое равно: " << sum / SIZE << endl;
	cout << "Максимальное значение равно: " << max << endl;
	cout << "Минимальное значение равно: " << min << endl;
}