//maxValueIn.cpp

#include"maxValueIn.h"

int maxValueIn(int A[], int size)
{
	int max = A[0];
	for (int i = 1; i < size; i++)
		if (A[i] > max)
			max = A[i];
	return max;
}
int maxValueIn(int A[ROW][COL], int ROW, int COL)
{
	int max = A[0][0];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			if (A[i][j] > max)
				max = A[i][j];
	return max;
}

double maxValueIn(double A[], int size)
{
	double max = A[0];
	for (int i = 1; i < size; i++)
		if (A[i] > max)
			max = A[i];
	return max;
}
double maxValueIn(double A[ROW][COL], int ROW, int COL)
{
	double max = A[0][0];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			if (A[i][j] > max)
				max = A[i][j];
	return max;
}