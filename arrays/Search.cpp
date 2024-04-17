//Search.cpp
#include"Search.h"

void Search(int A[])
{
	int BUF[SIZE]{}, size_BUF{};
	for (int i = 0; i < SIZE; i++)
	{
		bool flag = true;
		for (int j = 0; j < size_BUF; j++)
			if (A[i] == BUF[j])
			{
				flag = false;
				break;
			}
		if (flag)
		{
			BUF[size_BUF++] = A[i];
			int col{};
			for (int j = i; j < SIZE; j++)
				if (A[i] == A[j])
					col++;
			if (col != 1)
				cout << "Ёлемент " << A[i] << " повторилс€ " << col << " раз\n";
		}
	}
}
//void Search(int A[ROW][COL])
//{
//	int BUF[ROW * COL]{}, size_BUF{};
//	for (int i = 0; i < ROW; i++)
//		for (int j = 0; j < COL; j++)
//		{
//			bool flag = true;
//			for (int l = 0; l < size_BUF; l++)
//				if (A[i][j] == BUF[l])
//				{
//					flag = false;
//					break;
//				}
//			if (flag)
//			{
//				BUF[size_BUF++] = A[i][j];
//				int col{};
//				for (int l = i; l < ROW; l++)
//					for (int k = (i == l ? j : 0); k < COL; k++)
//						if (A[i][j] == A[l][k])
//							col++;
//				if (col != 1)
//					cout << "Ёлемент " << A[i][j] << " повторилс€ " << col << " раз\n";
//			}
//		}
//}

void Search(double A[])
{
	double BUF[SIZE]{};
	int size_BUF{};
	for (int i = 0; i < SIZE; i++)
	{
		bool flag = true;
		for (int j = 0; j < size_BUF; j++)
			if (A[i] == BUF[j])
			{
				flag = false;
				break;
			}
		if (flag)
		{
			BUF[size_BUF++] = A[i];
			int col = 1;
			for (int j = i + 1; j < SIZE; j++)
				if (A[i] == A[j])
					col++;
			if (col != 1)
				cout << "Ёлемент " << A[i] << " повторилс€ " << col << " раз\n";
		}
	}
}
//void Search(double A[ROW][COL])
//{
//	double BUF[ROW * COL]{};
//	int size_BUF{};
//	for (int i = 0; i < ROW; i++)
//		for (int j = 0; j < COL; j++)
//		{
//			bool flag = true;
//			for (int l = 0; l < size_BUF; l++)
//				if (A[i][j] == BUF[l])
//				{
//					flag = false;
//					break;
//				}
//			if (flag)
//			{
//				BUF[size_BUF++] = A[i][j];
//				int col{};
//				for (int l = i; l < ROW; l++)
//					for (int k = (i == l ? j : 0); k < COL; k++)
//						if (A[i][j] == A[l][k])
//							col++;
//				if (col != 1)
//					cout << "Ёлемент " << A[i][j] << " повторилс€ " << col << " раз\n";
//			}
//		}
//}

void Search(char A[])
{
	char BUF[SIZE]{};
	int size_BUF{};
	for (int i = 0; i < SIZE; i++)
	{
		bool flag = true;
		for (int j = 0; j < size_BUF; j++)
			if (A[i] == BUF[j])
			{
				flag = false;
				break;
			}
		if (flag)
		{
			BUF[size_BUF++] = A[i];
			int col = 1;
			for (int j = i + 1; j < SIZE; j++)
				if (A[i] == A[j])
					col++;
			if (col != 1)
				cout << "Ёлемент " << A[i] << " повторилс€ " << col << " раз\n";
		}
	}
}
//void Search(char A[ROW][COL])
//{
//	char BUF[ROW * COL]{};
//	int size_BUF{};
//	for (int i = 0; i < ROW; i++)
//		for (int j = 0; j < COL; j++)
//		{
//			bool flag = true;
//			for (int l = 0; l < size_BUF; l++)
//				if (A[i][j] == BUF[l])
//				{
//					flag = false;
//					break;
//				}
//			if (flag)
//			{
//				BUF[size_BUF++] = A[i][j];
//				int col{};
//				for (int l = i; l < ROW; l++)
//					for (int k = (i == l ? j : 0); k < COL; k++)
//						if (A[i][j] == A[l][k])
//							col++;
//				if (col != 1)
//					cout << "Ёлемент " << A[i][j] << " повторилс€ " << col << " раз\n";
//			}
//		}
//}