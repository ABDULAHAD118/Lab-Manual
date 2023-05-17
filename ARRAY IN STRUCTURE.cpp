#include<iostream>
using namespace std;
struct student {
	string name;
	int rollno;
	int marks[5];
};
int main()
{
	struct student s;
	cout << "Enter the Name of Student\n";
	cin >> s.name;
	cout << "Enter the Roll No of the Student\n";
	cin >> s.rollno;
	cout << "Enter the number of 5 subject\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the number of " << i + 1 << " subject\n";
		cin >> s.marks[i];
	}
	cout << "The Name of the Student is " << s.name << endl;
	cout << "The Roll No of the Student is " << s.rollno << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << "The number of " << j + 1 << " subject is " << s.marks[j] << endl;
	}
	return 0;
}