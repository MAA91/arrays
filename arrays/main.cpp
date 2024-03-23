#include <iostream>

using namespace std;

void FillRand(int A[], int size, int min_zn, int max_zn)
{
	for (int i = 0; i < size; i++)
		A[i] = min_zn + rand() % (max_zn - min_zn + 1);
}
void FillRand(double A[], int size, double min_zn, double max_zn)
{
	for (int i = 0; i < size; i++)
		A[i] = min_zn / (rand() % 10) + rand() % (int)(max_zn - min_zn + 1);
}
void FillRand(char A[], int size)
{
	for (int i = 0; i < size; i++)
		A[i] = 33 + rand() % 95;
}

void Print(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}
void Print(double A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}
void Print(char A[], int size)
{
	setlocale(0, "C");
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
	setlocale(0, "");
}

int Sum(int A[], int size)
{
	int sum{};
	for (int i = 0; i < size; i++)
		sum += A[i];
	return sum;
}
double Sum(double A[], int size)
{
	double sum{};
	for (int i = 0; i < size; i++)
		sum += A[i];
	return sum;
}

double Avg(int A[], int size)
{
	return (double)Sum(A, size) / size;
}
double Avg(double A[], int size)
{
	return Sum(A, size) / size;
}

int maxValueIn(int A[], int size)
{
	int max = A[0];
	for (int i = 1; i < size; i++)
		if (A[i] > max)
			max = A[i];
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

int minValueIn(int A[], int size)
{
	int min = A[0];
	for (int i = 1; i < size; i++)
		if (A[i] < min)
			min = A[i];
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

void main()
{
	setlocale(0, "");
	srand(time(NULL));
	const int size = 10;
	//char min_zn, max_zn{};
	char A[size]{};
	//cout << "Введите минимальное и максимальное значение: "; cin >> min_zn >> max_zn;
	FillRand(A, size);
	Print(A, size);
	/*cout << Sum(A, size) << endl;
	cout << Avg(A, size) << endl;*/
	shiftLeft(A, size, 7);
	Print(A, size);
	shiftRight(A, size, 8);
	Print(A, size);
	
}