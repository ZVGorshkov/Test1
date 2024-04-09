#include <algorithm>
#include <span>
#include <array>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>

using namespace std;


void main()
{
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 10;
	int arr[size];

	for (int i = 0; i < size; i++)
		arr[i] = rand() % 10;

		while (true)
		{
			system("cls");
			cout << "1. Вывести массив" << endl;
			cout << "2. Вывести массив индексами" << endl;
			cout << "0. Выход" << endl;

			int input;
			cin >> input;

			if (input == 0)
				break;

			switch (input)
			{
			case 1:
				for (int i = 0; i < size; i++)
				{
					cout << arr[i] << " ";
					cout << endl;
				}
			case 2:
				for (int i = 0; i < size; i++)
				{
					cout << "[" << i << "]" << arr[i] << endl;
				}
				system("pause");
			}


		}


	system("pause");
}
