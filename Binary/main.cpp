#include <iostream>
//#define BIN1
#define BIN2

using namespace std;

void main()
{
	setlocale(0, "");
	int number;
	cout << "Введите число которое нужно перевести в двоичный код: "; cin >> number;
	if (number == 0)
		cout << "0(10) = 0(2)";
	else
	{
		cout << number << "(10) = ";
		if (number < 0)cout << "-";
		int num_buf{ abs(number) };
	#ifdef BIN1
		int stepen{ 2 };
		bool flag{ false };

		for (; stepen < num_buf; stepen *= 2) {}
		for (; stepen > 0; stepen /= 2)
		{
			if (stepen <= num_buf)
			{
				cout << 1;
				num_buf -= stepen;
				flag = true;
			}
			else if (flag)
				cout << 0;
		}
	#endif // BIN1

	#ifdef BIN2
		int A[32]{}, size{ 0 };
		for (int i{ 0 }; num_buf != 0; i++, num_buf >>= 1, size++)
			A[i] = (num_buf ^ 2) % 2;

		for (int i = 0; i < size; i++)
			cout << A[size - 1 - i];
	#endif // BIN2
		cout << "(2)\n";
	}
}