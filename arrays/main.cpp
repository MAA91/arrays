#include "stdafx.h"
#include "BaseFunction.h"
#include "BaseFunction.cpp"
#include "MathFunction.h"
#include "MathFunction.cpp"
#include "shifts.h"
#include "shifts.cpp"

void main()
{
	setlocale(0, "");
	srand(time(NULL));
	int A[SIZE]{};
	FillRand(A, SIZE, 0, 256);
	Print(A, SIZE);
	cout << Sum(A, SIZE) << endl;
	cout << Avg(A, SIZE) << endl;
	cout << maxValueIn(A, SIZE) << endl;
	cout << minValueIn(A, SIZE) << endl;
	shiftLeft(A, SIZE, 7);
	Print(A, SIZE);
	shiftRight(A, SIZE, 8);
	Print(A, SIZE);
	Search(A);
}