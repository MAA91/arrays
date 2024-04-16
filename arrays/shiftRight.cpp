//shiftRight.cpp

#include"Consts.h"

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
void shiftRight(int A[ROW][COL], int ROW, int COL, int shifts)
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < shifts % COL; j++)
		{
			int buf = A[i][COL - 1];
			for (int l = COL - 1; l > 0; l--)
				A[i][l] = A[i][l - 1];
			A[i][0] = buf;
		}
}

void shiftRight(double A[], int size, int shifts)
{
	for (int i = 0; i < shifts % size; i++)
	{
		double buf = A[size - 1];
		for (int j = size - 1; j > 0; j--)
			A[j] = A[j - 1];
		A[0] = buf;
	}
}
void shiftRight(double A[ROW][COL], int ROW, int COL, int shifts)
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < shifts % COL; j++)
		{
			double buf = A[i][COL - 1];
			for (int l = COL - 1; l > 0; l--)
				A[i][l] = A[i][l - 1];
			A[i][0] = buf;
		}
}

void shiftRight(char A[], int size, int shifts)
{
	for (int i = 0; i < shifts % size; i++)
	{
		char buf = A[size - 1];
		for (int j = size - 1; j > 0; j--)
			A[j] = A[j - 1];
		A[0] = buf;
	}
}
void shiftRight(char A[ROW][COL], int ROW, int COL, int shifts)
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < shifts % COL; j++)
		{
			char buf = A[i][COL - 1];
			for (int l = COL - 1; l > 0; l--)
				A[i][l] = A[i][l - 1];
			A[i][0] = buf;
		}
}