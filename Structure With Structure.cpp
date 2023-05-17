#include<iostream>
using namespace std;
struct Date {
	int day;
	int month;
	int year;
};

struct employee {
	string name;
	int age;
	Date joiningdate;
};

int main()
{
	struct employee emp;
	cout << "Enter the Name of Employee\n";
	cin >> emp.name;
	cout << "Enter the Age of the Employee\n";
	cin >> emp.age;
	cout << "Enter the Joining Date of Employee (DAY/MONTH/YEAR)\n";
	cin >> emp.joiningdate.day >> emp.joiningdate.month >> emp.joiningdate.year;

	cout << "The Name of Employee is "<< emp.name<<endl;
	cout << "The Age of the Employee is "<<emp.age<<endl;
	cout << "The Joining Date of Employee (DAY/MONTH/YEAR) is ";
	cout<< emp.joiningdate.day << "/" << emp.joiningdate.month << "/" << emp.joiningdate.year;
	return 0;
}