//Avg.cpp

#include"Avg.h"

double Avg(int A[], int size)
{
	return (double)Sum(A, size) / size;
}
double Avg(int A[ROW][COL], int ROW, int COL)
{
	return (double)Sum(A, ROW, COL) / (ROW * COL);
}

double Avg(double A[], int size)
{
	return Sum(A, size) / size;
}
double Avg(double A[ROW][COL], int ROW, int COL)
{
	return (double)Sum(A, ROW, COL) / (ROW * COL);
}