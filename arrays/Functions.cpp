//Functions.cpp
#include"Functions.h"

void FillRand(int A[], int size, int min_zn, int max_zn)
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

int minValueIn(int A[], int size)
{
	int min = A[0];
	for (int i = 1; i < size; i++)
		if (A[i] < min)
			min = A[i];
	return min;
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