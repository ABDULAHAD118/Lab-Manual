#include<iostream>
using namespace std;
struct student {
	string name;
	int rollno;
	int* marks;
};

int main()
{
	struct student s;
	cout << "Enter the name of student\n";
	cin >> s.name;
	cout << "Enter the Roll no of Student\n";
	cin >> s.rollno;
	s.marks = new int[5];
	for (int i = 0; i < 5; i++)
	{
	cout << "Enter the marks of student\n";
	cin >> s.marks[i];
	}
	student* ptr = &s;
	cout << "The name of student is " << ptr->name<<endl;
	cout << "The roll no of student is " << ptr->rollno<<endl;
	for (int j = 0; j < 5; j++)
	{
		cout << "The marks of student is " << ptr->marks[j] << endl;
	}

	delete[] s.marks;
	return 0;
}