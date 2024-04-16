//Print.cpp

#include"Print.h"

void Print(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}
void Print(int A[ROW][COL], int ROW, int COL)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
			cout << A[i][j] << "\t";
		cout << endl;
	}
}

void Print(double A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}
void Print(double A[ROW][COL], int ROW, int COL)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
			cout << A[i][j] << "\t";
		cout << endl;
	}
}

void Print(char A[], int size)
{
	setlocale(0, "C");
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
	setlocale(0, "");
}
void Print(char A[ROW][COL], int ROW, int COL)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
			cout << A[i][j] << "\t";
		cout << endl;
	}
}