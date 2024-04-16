//FillRand.cpp

#include"stdafx.h"
#include"Consts.h"

void FillRand(int A[], int size, int min_zn, int max_zn)
{
	for (int i = 0; i < size; i++)
		A[i] = min_zn + rand() % (max_zn - min_zn + 1);
}
void FillRand(int A[ROW][COL], int ROW, int COL, int min_zn, int max_zn)
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			A[i][j] = min_zn + rand() % (max_zn - min_zn + 1);
}

void FillRand(double A[], int size, double min_zn, double max_zn)
{
	for (int i = 0; i < size; i++)
		A[i] = (double)(rand() % 1000) / 1000 + min_zn + rand() % (int)(max_zn - min_zn);
}
void FillRand(double A[ROW][COL], int ROW, int COL, double min_zn, double max_zn)
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			A[i][j] = (double)(rand() % 1000) / 1000 + min_zn + rand() % (int)(max_zn - min_zn);
}

void FillRand(char A[], int size)
{
	for (int i = 0; i < size; i++)
		A[i] = 33 + rand() % 95;
}
void FillRand(char A[ROW][COL], int ROW, int COL)
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			A[i][j] = 33 + rand() % 95;
}