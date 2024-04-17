#include"stdafx.h"
#include"Functions.h"
#include"Search.h"


void main()
{
	setlocale(0, "");
	srand(time(NULL));
	int A[SIZE]{};
	FillRand(A, SIZE, 0, 10);
	Print(A, SIZE);
	cout << Sum(A, SIZE) << endl;
	cout << Avg(A, SIZE) << endl;
	shiftLeft(A, SIZE, 7);
	Print(A, SIZE);
	shiftRight(A, SIZE, 8);
	Print(A, SIZE);
	Search(A);
}