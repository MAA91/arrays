//shifts.cpp
#include "shifts.h"

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