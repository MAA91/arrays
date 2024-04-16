//Sum.cpp

#include"Consts.h"

int Sum(int A[], int size)
{
	int sum{};
	for (int i = 0; i < size; i++)
		sum += A[i];
	return sum;
}
int Sum(int A[ROW][COL], int ROW, int COL)
{
	int sum{};
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			sum += A[i][j];
	return sum;
}

double Sum(double A[], int size)
{
	double sum{};
	for (int i = 0; i < size; i++)
		sum += A[i];
	return sum;
}
double Sum(double A[ROW][COL], int ROW, int COL)
{
	double sum{};
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			sum += A[i][j];
	return sum;
}