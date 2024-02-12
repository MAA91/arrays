#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "");
	srand(time(NULL));
	const int SIZE = 10;
	int A[SIZE] = {}, diapazone_1, diapazone_2;
	cout << "Введите ганицы диапазона: "; cin >> diapazone_1 >> diapazone_2;
	int size = abs(diapazone_1 - diapazone_2) + 1;
	for (int i = 0; i < SIZE; i++)
	{
		A[i] = diapazone_1 + rand() % size;
		cout << A[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
		for (int j = 1; j < SIZE - i; j++)
			if (A[j - 1] > A[j])
			{
				int buf = A[j];
				A[j] = A[j - 1];
				A[j - 1] = buf;
			}
	for (int i = 0; i < SIZE; i++)
		cout << A[i] << "\t";
	cout << endl;
}