//shiftLeft.cpp

#include"Consts.h"

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
void shiftLeft(int A[ROW][COL], int ROW, int COL, int shifts)
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < shifts % COL; j++)
		{
			int buf = A[i][0];
			for (int l = 1; l < COL; l++)
				A[i][l - 1] = A[i][l];
			A[i][COL - 1] = buf;
		}
}

void shiftLeft(double A[], int size, int shifts)
{
	for (int i = 0; i < shifts % size; i++)
	{
		double buf = A[0];
		for (int j = 1; j < size; j++)
			A[j - 1] = A[j];
		A[size - 1] = buf;
	}
}
void shiftLeft(double A[ROW][COL], int ROW, int COL, int shifts)
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < shifts % COL; j++)
		{
			double buf = A[i][0];
			for (int l = 1; l < COL; l++)
				A[i][l - 1] = A[i][l];
			A[i][COL - 1] = buf;
		}
}

void shiftLeft(char A[], int size, int shifts)
{
	for (int i = 0; i < shifts % size; i++)
	{
		char buf = A[0];
		for (int j = 1; j < size; j++)
			A[j - 1] = A[j];
		A[size - 1] = buf;
	}
}
void shiftLeft(char A[ROW][COL], int ROW, int COL, int shifts)
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < shifts % COL; j++)
		{
			char buf = A[i][0];
			for (int l = 1; l < COL; l++)
				A[i][l - 1] = A[i][l];
			A[i][COL - 1] = buf;
		}
}