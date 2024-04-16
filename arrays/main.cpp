#include <iostream>


using namespace std;


const int ROW = 5;
const int COL = 5;
const int SIZE = 10;


void FillRand(int A[], int size, int min_zn, int max_zn);
void FillRand(int A[ROW][COL], int ROW, int COL, int min_zn, int max_zn);

void FillRand(double A[], int size, double min_zn, double max_zn);
void FillRand(double A[ROW][COL], int ROW, int COL, double min_zn, double max_zn);

void FillRand(char A[], int size);
void FillRand(char A[ROW][COL], int ROW, int COL);


void Print(int A[], int size);
void Print(int A[ROW][COL], int ROW, int COL);

void Print(double A[], int size);
void Print(double A[ROW][COL], int ROW, int COL);

void Print(char A[], int size);
void Print(char A[ROW][COL], int ROW, int COL);


int Sum(int A[], int size);
int Sum(int A[ROW][COL], int ROW, int COL);

double Sum(double A[], int size);
double Sum(double A[ROW][COL], int ROW, int COL);


double Avg(int A[], int size);
double Avg(int A[ROW][COL], int ROW, int COL);

double Avg(double A[], int size);
double Avg(double A[ROW][COL], int ROW, int COL);


int maxValueIn(int A[], int size);
int maxValueIn(int A[ROW][COL], int ROW, int COL);

double maxValueIn(double A[], int size);
double maxValueIn(double A[ROW][COL], int ROW, int COL);


int minValueIn(int A[], int size);
int minValueIn(int A[ROW][COL], int ROW, int COL);

double minValueIn(double A[], int size);
double minValueIn(double A[ROW][COL], int ROW, int COL);


void shiftLeft(int A[], int size, int shifts);
void shiftLeft(int A[ROW][COL], int ROW, int COL, int shifts);

void shiftLeft(double A[], int size, int shifts);
void shiftLeft(double A[ROW][COL], int ROW, int COL, int shifts);

void shiftLeft(char A[], int size, int shifts);
void shiftLeft(char A[ROW][COL], int ROW, int COL, int shifts);


void shiftRight(int A[], int size, int shifts);
void shiftRight(int A[ROW][COL], int ROW, int COL, int shifts);

void shiftRight(double A[], int size, int shifts);
void shiftRight(double A[ROW][COL], int ROW, int COL, int shifts);

void shiftRight(char A[], int size, int shifts);
void shiftRight(char A[ROW][COL], int ROW, int COL, int shifts);


void Sort(int A[], int size);
void Sort(int A[ROW][COL]);

void Sort(double A[], int size);
void Sort(double A[ROW][COL]);

void Unique(int A[], int size, int min_zn, int max_zn);
void Unique(int A[ROW][COL], int ROW, int COL, int min_zn, int max_zn);


void Unique(double A[], int size, double min_zn, double max_zn);
void Unique(double A[ROW][COL], int ROW, int COL, double min_zn, double max_zn);

void Unique(char A[], int size);
void Unique(char A[ROW][COL], int ROW, int COL);


void main()
{
	setlocale(0, "");
	srand(time(NULL));
	int A[ROW][COL]{};
	Unique(A, ROW, COL, 0, 25);
	Print(A, ROW, COL);
	Sort(A);
	cout << endl; Print(A, ROW, COL);
}

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


double Avg(int A[], int size)
{
	return (double)Sum(A, size) / size;
}
double Avg(int A[ROW][COL], int ROW, int COL)
{
	return (double)Sum(A, ROW, COL) / (ROW * COL);
}

double Avg(double A[], int size)
{
	return Sum(A, size) / size;
}
double Avg(double A[ROW][COL], int ROW, int COL)
{
	return (double)Sum(A, ROW, COL) / (ROW * COL);
}


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