#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "");
	int number;
	cout << "Введите число которое нужно перевести в шеснацитеричный код: "; cin >> number;
	if (number == 0)
		cout << "0(10) = 0(16)\n";
	else
	{
		int stepen = 16, num_buf;
		bool flag = false;

		cout << number << "(10) = ";
		if (number < 0)cout << "-";

		num_buf = abs(number);
		for (; stepen <= num_buf; stepen *= 16) {}
		stepen /= 16;
		for (; stepen > 0; stepen /= 16)
		{
			if (num_buf / stepen > 0 and num_buf / stepen < 10)
			{
				cout << num_buf / stepen;
				num_buf -= num_buf / stepen * stepen;
				flag = true;
			}
			else if (num_buf / stepen > 9 and num_buf / stepen < 16)
			{
				cout << (char)(55 + num_buf / stepen);
				num_buf -= num_buf / stepen * stepen;
				flag = true;
			}
			else if (flag)
				cout << 0;
		}
		cout << "(16)\n";
	}
}