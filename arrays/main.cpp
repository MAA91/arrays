﻿#include <iostream>

using namespace std;

void FillRand(int A[], int size, int min_zn = 1, int max_zn = 10)
{
	for (int i = 0; i < size; i++)
		A[i] = min_zn + rand() % (max_zn - min_zn + 1);
}
void Print(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}
int Sum(int A[], int size)
{
	int sum{};
	for (int i = 0; i < size; i++)
		sum += A[i];
	return sum;
}
double Avg(int A[], int size)
{
	return (double)Sum(A, size) / size;
}
int maxValueIn(int A[], int size)
{
	int max = A[0];
	for (int i = 1; i < size; i++)
		if (A[i] > max)
			max = A[i];
	return max;
}
void shiftLeft(int A[], int size, int shifts)
{
	for (int i = 0; i < shifts % size; i++)
	{
		int buf = A[0];
		for (int j = 1; j < size; j++)
			A[j - 1] = A[j];
		A[size - 1] = buf;
	}
}
void shiftRight(int A[], int size, int shifts)
{
	for (int i = 0; i < shifts % size; i++)
	{
		int buf = A[size - 1];
		for (int j = size - 1; j > 0; j--)
			A[j] = A[j - 1];
		A[0] = buf;
	}
}

void main()
{
	setlocale(0, "");
	srand(time(NULL));
	const int size = 10;
	int min_zn, max_zn{};
	int A[size]{};
	cout << "Введите минимальное и максимальное значение: "; cin >> min_zn >> max_zn;
	FillRand(A, size, min_zn, max_zn);
	Print(A, size);
	cout << Sum(A, size) << endl;
	cout << Avg(A, size) << endl;
	shiftLeft(A, size, 7);
	Print(A, size);
	shiftRight(A, size, 8);
	Print(A, size);
}