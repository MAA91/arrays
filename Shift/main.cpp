#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "");
	const int SIZE = 10;
	int A[SIZE] = {}, sdvig;
	cout << "Введите число на которое нужно выполнить сдвиг: "; cin >> sdvig;
	A[0] = A[1] = 1;
	for (int i = 2; i < SIZE; i++)
		A[i] = A[i - 1] + A[i - 2];
	for (int i = 0; i < sdvig % SIZE; i++)
	{
		int buf = A[0];
		for (int j = 1; j < SIZE; j++)
			A[j - 1] = A[j];
		A[SIZE - 1] = buf;
	}
	for (int i = 0; i < SIZE; i++)
		cout << A[i] << "\t";
}