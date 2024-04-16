//minValueIn.cpp

#include"Consts.h"

int minValueIn(int A[], int size)
{
	int min = A[0];
	for (int i = 1; i < size; i++)
		if (A[i] < min)
			min = A[i];
	return min;
}
int minValueIn(int A[ROW][COL], int ROW, int COL)
{
	int min = A[0][0];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			if (A[i][j] < min)
				min = A[i][j];
	return min;
}

double minValueIn(double A[], int size)
{
	double min = A[0];
	for (int i = 1; i < size; i++)
		if (A[i] < min)
			min = A[i];
	return min;
}
double minValueIn(double A[ROW][COL], int ROW, int COL)
{
	double min = A[0][0];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			if (A[i][j] < min)
				min = A[i][j];
	return min;
}