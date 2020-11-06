#include <iostream>

using namespace std;

struct Student
{
	int id;
	char name[20];
	char surname[20];

};

int main()
{
	Student x[3];
	int i = 0;

	cout << "Enter ID NAME SURNAME in order.\n";
	while (i < 3)
	{
		cin >> x[i].id >> x[i].name >> x[i].surname;
		i++;
	}

	cout << "\n\tSORT by ID\n";
	if (x[0].id > x[1].id && x[0].id > x[2].id)
	{
		if (x[1].id > x[2].id)
		{
			cout << x[2].id << "\t" << x[2].name << "\t" << x[2].surname << "\n";
			cout << x[1].id << "\t" << x[1].name << "\t" << x[1].surname << "\n";
			cout << x[0].id << "\t" << x[0].name << "\t" << x[0].surname << "\n";
		}
		else
		{
			cout << x[1].id << "\t" << x[1].name << "\t" << x[1].surname << "\n";
			cout << x[2].id << "\t" << x[2].name << "\t" << x[2].surname << "\n";
			cout << x[0].id << "\t" << x[0].name << "\t" << x[0].surname << "\n";
		}
	}
	if (x[1].id > x[0].id && x[1].id > x[2].id)
	{
		if (x[0].id > x[2].id)
		{
			cout << x[2].id << "\t" << x[2].name << "\t" << x[2].surname << "\n";
			cout << x[0].id << "\t" << x[0].name << "\t" << x[0].surname << "\n";
			cout << x[1].id << "\t" << x[1].name << "\t" << x[1].surname << "\n";
		}
		else
		{
			cout << x[0].id << "\t" << x[0].name << "\t" << x[0].surname << "\n";
			cout << x[2].id << "\t" << x[2].name << "\t" << x[2].surname << "\n";
			cout << x[1].id << "\t" << x[1].name << "\t" << x[1].surname << "\n";
		}
	}
	if (x[2].id > x[0].id && x[2].id > x[1].id)
	{
		if (x[0].id > x[1].id)
		{
			cout << x[1].id << "\t" << x[1].name << "\t" << x[1].surname << "\n";
			cout << x[0].id << "\t" << x[0].name << "\t" << x[0].surname << "\n";
			cout << x[2].id << "\t" << x[2].name << "\t" << x[2].surname << "\n";
		}
		else
		{
			cout << x[0].id << "\t" << x[0].name << "\t" << x[0].surname << "\n";
			cout << x[1].id << "\t" << x[1].name << "\t" << x[1].surname << "\n";
			cout << x[2].id << "\t" << x[2].name << "\t" << x[2].surname << "\n";
		}
	}

	return 0;
}