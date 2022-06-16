#include<string.h> // Для работы с функциями массивов

#include<conio.h> // Консольный ввод-вывод

#include<clocale> // Локализатор

#include<iostream>

#include <ctype.h>

using namespace std;

class Aerflot

{
	char kuda[20], type[20];

	int reis, timeH, timeM, week[7];

public:
	// Ввод данных о самолёте
	void set()
	{


		cout << "\nТочка назначения: " << "\n >> ";	cin >> kuda;

		cout << "\nТип самолёта: " << "\n >> ";	cin >> type;

		cout << "\nНомер рейса: " << "\n >> ";	cin >> reis;

		cout << "\nВремя отправления (ЧЧ ММ): " << "\n >> ";	cin >> timeH >> timeM;

		cout << "\nДни вылетов (Вводите номер дня недели (1-7) | Для продолжение программы введите 0): " << "\n >> ";

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

			cout << "\nПункт назначения: " << kuda << "\n";

			cout << "Время отправления: " << timeH << ":" << timeM << "\n";

			cout << "Тип самолёта: " << type << "\n";

			cout << "Дни вылета: ";

			for (int i = 0; i != sizeof(week) / sizeof(int); i++)

				if (week[i] > 0)

				{
					if (i == 1)
						cout << "Пн" << " ";

					if (i == 2)
						cout << "Вт" << " ";

					if (i == 3)
						cout << "Ср" << " ";

					if (i == 4)
						cout << "Чт" << " ";

					if (i == 5)
						cout << "Пт" << " ";

					if (i == 6)
						cout << "Сб" << " ";

					if (i == 7)
						cout << "Вс" << " ";
				}

			cout << endl;
		}

	}

	void show(int day)
	{

		for (int j = 0; j < sizeof(week) / sizeof(int); j++)

			if (day == week[j])

			{

				cout << "\nПункт назначения: " << kuda << "\n";

				cout << "Время отправления: " << timeH << ":" << timeM << "\n";

				cout << "Тип самолёта: " << type << "\n";

				cout << "Дни вылета: ";

				for (int i = 0; i != sizeof(week) / sizeof(int); i++)

					if (week[i] > 0)

					{
						if (week[i] == 1)
							cout << "Пн" << " ";

						if (week[i] == 2)
							cout << "Вт" << " ";

						if (week[i] == 3)
							cout << "Ср" << " ";

						if (week[i] == 4)
							cout << "Чт" << " ";

						if (week[i] == 5)
							cout << "Пт" << " ";

						if (week[i] == 6)
							cout << "Сб" << " ";

						if (week[i] == 7)
							cout << "Вс" << " ";
					}

				cout << endl;
			}
	}
	void show()
	{

		cout << "\nПункт назначения: " << kuda << "\n";

		cout << "Время отправления: " << timeH << ":" << timeM << "\n";

		cout << "Тип самолёта: " << type << "\n";

		cout << "Дни вылета: ";

		for (int i = 0; i != sizeof(week) / sizeof(int); i++)

			if (week[i] > 0)

			{
				if (week[i] == 1)
					cout << "Пн" << " ";

				if (week[i] == 2)
					cout << "Вт" << " ";

				if (week[i] == 3)
					cout << "Ср" << " ";

				if (week[i] == 4)
					cout << "Чт" << " ";

				if (week[i] == 5)
					cout << "Пт" << " ";

				if (week[i] == 6)
					cout << "Сб" << " ";

				if (week[i] == 7)
					cout << "Вс" << " ";
			}

		cout << endl;

	}
};

void main()
{

	setlocale(LC_ALL, "rus");

	int timeH, n, day;

	char kuda[30];

	cout << "Введите количество записей (цифренно): ";

	cin >> n;



	Aerflot* A;

	A = new Aerflot[n];

	system("cls");
	cout << "----------------------------------------\n";

	cout << " Ввод данных [Только на Eng language]";

	cout << "\n----------------------------------------\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Ввод №" << i + 1 << " / " << n << "\n";
		A[i].set();
	}
	system("cls");
	cout << "\n------------------------------------------\n";

	cout << "Список рейсов:\n";

	for (int i = 0; i < n; i++)

		A[i].show();

	cout << "\n------------------------------------------\n";

	cout << "\n\nСписок самолётов по заданному направлению:\n";

	cout << "Введите направление: " << "\n >> ";	cin >> kuda;
	system("cls");

	cout << "\n------------------------------------------\n";
	for (int i = 0; i < n; i++)

		A[i].show(kuda);

	cout << "\n------------------------------------------\n";

	cout << "Список самолётов по заданному дню недели:\n";

	cout << "Введите номер дня недели(1-7): " << "\n >> ";	cin >> day;

	for (int i = 0; i < n; i++)

		A[i].show(day);


	cout << "\n----------------------------------------------------------------\n";

	cout << "Список рейсов, отправляющихся позже указанного часа (+1 час) в заданный день недели:\n";

	cout << "Введите час: " << "\n >> ";	cin >> timeH;

	cout << "Введите номер дня недели(1-7): " << "\n >> ";	cin >> day;

	for (int i = 0; i < n; i++)

		if (A[i].get(day, timeH))

			A[i].show();


}