#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "");
	int number, system;
	cout << "Введите основание системы исчесления(от 2 до 36): "; cin >> system;
	while (system < 2 or system > 36)
	{
		cout << "Введено не корректное основание системы исчесления!\n";
		cout << "Введите основание системы исчесления(от 2 до 36): "; cin >> system;
	}
	cout << "Введите число в десятичной системе исчесления которое нужно перевести " 
		<< "в заданную систему исчисления: "; cin >> number;
	if (number == 0)
		cout << "0(10) = 0(" << system << ")\n";
	else
	{
		int stepen = system, num_buf;
		bool flag = false;

		cout << number << "(10) = ";
		if (number < 0)cout << "-";

		num_buf = abs(number);
		for (; stepen <= num_buf; stepen *= system) {}
		stepen /= system;
		for (; stepen > 0; stepen /= system)
		{
			if (num_buf / stepen > 0 and num_buf / stepen < 10)
			{
				cout << num_buf / stepen;
				num_buf -= num_buf / stepen * stepen;
				flag = true;
			}
			else if (num_buf / stepen > 9 and num_buf / stepen < system)
			{
				cout << (char)(55 + num_buf / stepen);
				num_buf -= num_buf / stepen * stepen;
				flag = true;
			}
			else if (flag)
				cout << 0;
		}
		cout << "(" << system << ")\n";
	}
}