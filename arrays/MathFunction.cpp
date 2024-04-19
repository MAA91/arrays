//MathFunction.cpp
#include"MathFunction.h"

template <typename T> T Sum(T A[], int size)
{
	T sum{};
	for (int i = 0; i < size; i++)
		sum += A[i];
	return sum;
}

template <typename T> double Avg(T A[], int size)
{
	return (double)Sum(A, size) / size;
}

template <typename T> T maxValueIn(T A[], int size)
{
	T max = A[0];
	for (int i = 1; i < size; i++)
		if (A[i] > max)
			max = A[i];
	return max;
}

template <typename T> T minValueIn(T A[], int size)
{
	T min = A[0];
	for (int i = 1; i < size; i++)
		if (A[i] < min)
			min = A[i];
	return min;
}
