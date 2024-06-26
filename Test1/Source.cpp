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
		cout << "1. ������� ������" << endl;
		cout << "2. ������� ������ ���������" << endl;
		cout << "3. ������������� �� �����������" << endl;
		cout << "4. ������������� �� ��������" << endl;
		cout << "5. ������������� ������" << endl;
		cout << "0. �����" << endl;

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
			break;

		case 2:
			for (int i = 0; i < size; i++)
			{
				cout << "[" << i << "]" << arr[i] << endl;
			}
			system("pause");
			break;

		case 3:
			sort(arr, arr + size);
			break;

		case 4:
			sort(arr, arr + size, [](int a, int b) {return a > b; });
			break;

		case 5:
			for (int i = 0; i < size; i++)
				arr[i] = rand() % 10;
			break;

		}

	}

	system("pause");
}
