#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "");
	const int SIZE = 5;
	int A[SIZE] = {};
	for (int i = 0; i < SIZE; i++)
		cin >> A[i];
	for (int i = 0; i < SIZE; i++)
		cout << A[i] << "\t";
	cout << endl;
}