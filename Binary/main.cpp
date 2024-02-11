#include <iostream>

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
		int stepen = 2, num_buf;
		bool flag = false;

		cout << number << "(10) = ";
		if (number < 0)cout << "-";

		num_buf = abs(number);
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
		cout << "(2)";
	}
}