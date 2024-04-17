#include"stdafx.h"
#include"Consts.h"
#include"FillRand.h"
#include"Print.h"
#include"Sum.h"
#include"Avg.h"
#include"maxValueIn.h"
#include"minValueIn.h"
#include"shiftLeft.h"
#include"shiftRight.h"
#include"Sort.h"
#include"Unique.h"

void main()
{
	setlocale(0, "");
	srand(time(NULL));
	char A[ROW][COL]{};
	FillRand(A, ROW, COL);
	Print(A, ROW, COL);
	/*Sort(A);
	Print(A, ROW, COL);*/
}