//Unique.cpp

#include"Unique.h"

void Unique(int A[], int size, int min_zn, int max_zn)
{
	A[0] = min_zn + rand() % (max_zn - min_zn + 1);
	for (int i = 1; i < size;)
	{
		A[i] = min_zn + rand() % (max_zn - min_zn + 1);
		for (int j = i - 1; j >= 0; j--)
		{
			if (A[i] == A[j])
				break;
			if (j == 0)
				i++;
		}
	}
}
void Unique(int A[ROW][COL], int ROW, int COL, int min_zn, int max_zn)
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
		{
			bool flag;
			do
			{
				flag = true;
				A[i][j] = min_zn + rand() % (max_zn - min_zn + 1);
				for (int l = 0; l <= i; l++)
				{
					for (int k = 0; k < (l == i ? j : COL); k++)
						if (A[i][j] == A[l][k])
						{
							flag = false;
							break;
						}
					if (!flag)
						break;
				}
			} while (!flag);
		}
}

void Unique(double A[], int size, double min_zn, double max_zn)
{
	A[0] = (double)(rand() % 1000) / 1000 + min_zn + rand() % (int)(max_zn - min_zn);
	for (int i = 1; i < size;)
	{
		A[i] = (double)(rand() % 1000) / 1000 + min_zn + rand() % (int)(max_zn - min_zn);
		for (int j = i - 1; j >= 0; j--)
		{
			if (A[i] == A[j])
				break;
			if (j == 0)
				i++;
		}
	}
}
void Unique(double A[ROW][COL], int ROW, int COL, double min_zn, double max_zn)
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
		{
			bool flag;
			do
			{
				flag = true;
				A[i][j] = (double)(rand() % 1000) / 1000 + min_zn + rand() % (int)(max_zn - min_zn);
				for (int l = 0; l <= i; l++)
				{
					for (int k = 0; k < (l == i ? j : COL); k++)
						if (A[i][j] == A[l][k])
						{
							flag = false;
							break;
						}
					if (!flag)
						break;
				}
			} while (!flag);
		}
}

void Unique(char A[], int size)
{
	A[0] = 33 + rand() % 95;
	for (int i = 1; i < size;)
	{
		A[i] = 33 + rand() % 95;
		for (int j = i - 1; j >= 0; j--)
		{
			if (A[i] == A[j])
				break;
			if (j == 0)
				i++;
		}
	}
}
void Unique(char A[ROW][COL], int ROW, int COL)
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
		{
			bool flag;
			do
			{
				flag = true;
				A[i][j] = 33 + rand() % 95;
				for (int l = 0; l <= i; l++)
				{
					for (int k = 0; k < (l == i ? j : COL); k++)
						if (A[i][j] == A[l][k])
						{
							flag = false;
							break;
						}

					if (!flag)
						break;
				}
			} while (!flag);
		}
}