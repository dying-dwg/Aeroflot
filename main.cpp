#include<string.h> // ��� ������ � ��������� ��������

#include<conio.h> // ���������� ����-�����

#include<clocale> // �����������

#include<iostream>

#include <ctype.h>

using namespace std;

class Aerflot

{
	char kuda[20], type[20];

	int reis, timeH, timeM, week[7];

public:
	// ���� ������ � �������
	void set()
	{


		cout << "\n����� ����������: " << "\n >> ";	cin >> kuda;

		cout << "\n��� �������: " << "\n >> ";	cin >> type;

		cout << "\n����� �����: " << "\n >> ";	cin >> reis;

		cout << "\n����� ����������� (�� ��): " << "\n >> ";	cin >> timeH >> timeM;

		cout << "\n��� ������� (������� ����� ��� ������ (1-7) | ��� ����������� ��������� ������� 0): " << "\n >> ";

		for (int i = 0; i < 7; i++)

		{
			int a;

			cin >> a;

			if (a != 0)
				week[i] = a;

			else
				break;

		}

		cout << endl;

	}

	bool get(int day, int h)
	{
		for (int j = 0; sizeof(week) / sizeof(int); j++)

			if (day == week[j])
			{

				if (h < timeH)
					return true;

				else
					return false;

			}

		return false;

	}

	void show(char* pin)
	{

		if (strcmp(pin, kuda) == 0)
		{

			cout << "\n����� ����������: " << kuda << "\n";

			cout << "����� �����������: " << timeH << ":" << timeM << "\n";

			cout << "��� �������: " << type << "\n";

			cout << "��� ������: ";

			for (int i = 0; i != sizeof(week) / sizeof(int); i++)

				if (week[i] > 0)

				{
					if (i == 1)
						cout << "��" << " ";

					if (i == 2)
						cout << "��" << " ";

					if (i == 3)
						cout << "��" << " ";

					if (i == 4)
						cout << "��" << " ";

					if (i == 5)
						cout << "��" << " ";

					if (i == 6)
						cout << "��" << " ";

					if (i == 7)
						cout << "��" << " ";
				}

			cout << endl;
		}

	}

	void show(int day)
	{

		for (int j = 0; j < sizeof(week) / sizeof(int); j++)

			if (day == week[j])

			{

				cout << "\n����� ����������: " << kuda << "\n";

				cout << "����� �����������: " << timeH << ":" << timeM << "\n";

				cout << "��� �������: " << type << "\n";

				cout << "��� ������: ";

				for (int i = 0; i != sizeof(week) / sizeof(int); i++)

					if (week[i] > 0)

					{
						if (week[i] == 1)
							cout << "��" << " ";

						if (week[i] == 2)
							cout << "��" << " ";

						if (week[i] == 3)
							cout << "��" << " ";

						if (week[i] == 4)
							cout << "��" << " ";

						if (week[i] == 5)
							cout << "��" << " ";

						if (week[i] == 6)
							cout << "��" << " ";

						if (week[i] == 7)
							cout << "��" << " ";
					}

				cout << endl;
			}
	}
	void show()
	{

		cout << "\n����� ����������: " << kuda << "\n";

		cout << "����� �����������: " << timeH << ":" << timeM << "\n";

		cout << "��� �������: " << type << "\n";

		cout << "��� ������: ";

		for (int i = 0; i != sizeof(week) / sizeof(int); i++)

			if (week[i] > 0)

			{
				if (week[i] == 1)
					cout << "��" << " ";

				if (week[i] == 2)
					cout << "��" << " ";

				if (week[i] == 3)
					cout << "��" << " ";

				if (week[i] == 4)
					cout << "��" << " ";

				if (week[i] == 5)
					cout << "��" << " ";

				if (week[i] == 6)
					cout << "��" << " ";

				if (week[i] == 7)
					cout << "��" << " ";
			}

		cout << endl;

	}
};

void main()
{

	setlocale(LC_ALL, "rus");

	int timeH, n, day;

	char kuda[30];

	cout << "������� ���������� ������� (��������): ";

	cin >> n;



	Aerflot* A;

	A = new Aerflot[n];

	system("cls");
	cout << "----------------------------------------\n";

	cout << " ���� ������ [������ �� Eng language]";

	cout << "\n----------------------------------------\n";
	for (int i = 0; i < n; i++)
	{
		cout << "���� �" << i + 1 << " / " << n << "\n";
		A[i].set();
	}
	system("cls");
	cout << "\n------------------------------------------\n";

	cout << "������ ������:\n";

	for (int i = 0; i < n; i++)

		A[i].show();

	cout << "\n------------------------------------------\n";

	cout << "\n\n������ �������� �� ��������� �����������:\n";

	cout << "������� �����������: " << "\n >> ";	cin >> kuda;
	system("cls");

	cout << "\n------------------------------------------\n";
	for (int i = 0; i < n; i++)

		A[i].show(kuda);

	cout << "\n------------------------------------------\n";

	cout << "������ �������� �� ��������� ��� ������:\n";

	cout << "������� ����� ��� ������(1-7): " << "\n >> ";	cin >> day;

	for (int i = 0; i < n; i++)

		A[i].show(day);


	cout << "\n----------------------------------------------------------------\n";

	cout << "������ ������, �������������� ����� ���������� ���� (+1 ���) � �������� ���� ������:\n";

	cout << "������� ���: " << "\n >> ";	cin >> timeH;

	cout << "������� ����� ��� ������(1-7): " << "\n >> ";	cin >> day;

	for (int i = 0; i < n; i++)

		if (A[i].get(day, timeH))

			A[i].show();


}