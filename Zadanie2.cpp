#include <iostream>
#include <string>

using namespace std;


class Student
{

	string Name1;
	string Name2;
	string Name3;
	double Usp[5];
	double Summ = 0;
	double Average;

public:
	int Number;


	void Input()
	{
		cout << "Введите ФИО: " << endl;
		cin >> Name1 >> Name2 >> Name3;
		cout << "Введите группу: " << endl;
		cin >> Number;
		cout << "Введите оценки: " << endl;

		for (int i = 0; i < 5; i++)
		{
			cin >> Usp[i];
			Summ += Usp[i];
		}
		Average = Summ / 5;
	}

	void Output()
	{
		cout << endl;

		cout << Name1 << " " << Name2 << " " << Name3 << "  ";
		cout << Number << "  ";

		cout.precision(2);
		cout << Average << endl;
	}


	void Selection()
	{
		if (Average > 4.2)
			Output();

	}

};


void BubbleShort(Student a[], int n)
{
	for (int i = 0; i < n - 1; ++i)
		for (int j = i + 1; j < n; ++j)
			if (a[i].Number > a[j].Number)
			{
				Student buffer = a[i];
				a[i] = a[j];
				a[j] = buffer;
			}
}


int main()
{
	setlocale(LC_ALL, "RU");

	const int n = 10;

	Student ans[n];

	for (int i = 0; i < n; i++)
	{
		ans[i].Input();

	}

	BubbleShort(ans, n);

	for (int i = 0; i < n; i++)
	{
		ans[i].Selection();

	}

}