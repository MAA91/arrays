#include "stdafx.h"
#include "BaseFunction.h"
#include "MathFunction.h"
#include "shifts.h"

void main()
{
	setlocale(0, "");
	srand(time(NULL));
	int A[SIZE]{};
	FillRand(A, SIZE, 0, 256);
	Print(A, SIZE);
	cout << Sum(A, SIZE) << endl;
	cout << Avg(A, SIZE) << endl;
	cout << maxValueIn(A, SIZE) << endl;
	cout << minValueIn(A, SIZE) << endl;
	shiftLeft(A, SIZE, 7);
	Print(A, SIZE);
	shiftRight(A, SIZE, 8);
	Print(A, SIZE);
	Search(A);
}

template <typename T, typename T1 >
void FillRand(T A[], int size, T1 min_zn, T1 max_zn)
{
	for (int i = 0; i < size; i++)
		A[i] = (T)(rand() % 1000) / 1000 + min_zn + rand() % (int)(max_zn - min_zn);
}

template <typename T>
void Print(T A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}

template <typename T>
void Search(T A[])
{
	T BUF[SIZE]{};
	int size_BUF{};
	for (int i = 0; i < SIZE; i++)
	{
		bool flag = true;
		for (int j = 0; j < size_BUF; j++)
			if (A[i] == BUF[j])
			{
				flag = false;
				break;
			}
		if (flag)
		{
			BUF[size_BUF++] = A[i];
			int col{};
			for (int j = i; j < SIZE; j++)
				if (A[i] == A[j])
					col++;
			if (col != 1)
				cout << "Элемент " << A[i] << " повторился " << col << " раз\n";
		}
	}
}

template <typename T>
T Sum(T A[], int size)
{
	T sum{};
	for (int i = 0; i < size; i++)
		sum += A[i];
	return sum;
}

template <typename T>
double Avg(T A[], int size)
{
	return (double)Sum(A, size) / size;
}

template <typename T>
T maxValueIn(T A[], int size)
{
	T max = A[0];
	for (int i = 1; i < size; i++)
		if (A[i] > max)
			max = A[i];
	return max;
}

template <typename T>
T minValueIn(T A[], int size)
{
	T min = A[0];
	for (int i = 1; i < size; i++)
		if (A[i] < min)
			min = A[i];
	return min;
}

template <typename T>
void shiftLeft(T A[], int size, int shifts)
{
	for (int i = 0; i < shifts % size; i++)
	{
		T buf = A[0];
		for (int j = 1; j < size; j++)
			A[j - 1] = A[j];
		A[size - 1] = buf;
	}
}

template <typename T>
void shiftRight(T A[], int size, int shifts)
{
	for (int i = 0; i < shifts % size; i++)
	{
		T buf = A[size - 1];
		for (int j = size - 1; j > 0; j--)
			A[j] = A[j - 1];
		A[0] = buf;
	}
}