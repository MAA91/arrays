//Sort.cpp

#include"Consts.h"

void Sort(int A[], int size)
{
	for (int i = 0; i < size; i++)
		for (int j = size - 1; j > i; j--)
			if (A[j] < A[j - 1])
			{
				int buf = A[j];
				A[j] = A[j - 1];
				A[j - 1] = buf;
			}
}
void Sort(int A[ROW][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			int min = A[i][j];
			int min_i = i, min_j = j;
			for (int l = j + 1; l < COL; l++)
				if (A[i][l] < min)
				{
					min = A[i][l];
					min_j = l;
				}
			for (int g = i + 1; g < ROW; g++)
				for (int l = 0; l < COL; l++)
					if (A[g][l] < min)
					{
						min = A[g][l];
						min_j = l;
						min_i = g;
					}
			int buf = A[i][j];
			A[i][j] = A[min_i][min_j];
			A[min_i][min_j] = buf;
		}
	}
}

void Sort(double A[], int size)
{
	for (int i = 0; i < size; i++)
		for (int j = size - 1; j > i; j--)
			if (A[j] < A[j - 1])
			{
				double buf = A[j];
				A[j] = A[j - 1];
				A[j - 1] = buf;
			}
}
void Sort(double A[ROW][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			double min = A[i][j];
			int min_i = i, min_j = j;
			for (int l = j; l < COL; l++)
				if (A[i][l] < min)
				{
					min = A[i][l];
					min_j = l;
				}
			for (int g = i + 1; g < ROW; g++)
				for (int l = 0; l < COL; l++)
					if (A[g][l] < min)
					{
						min = A[g][l];
						min_j = l;
						min_i = g;
					}
			double buf = A[i][j];
			A[i][j] = A[min_i][min_j];
			A[min_i][min_j] = buf;
		}
	}
}