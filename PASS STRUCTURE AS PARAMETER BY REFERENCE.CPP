#include<iostream>
using namespace std;
struct student {
	string name;
	int roll;
	char sec;
};

void fun(student& s1)
{
	s1.name = "ABDULAHAD";
	s1.roll = 549;
	s1.sec = 'A';
} 
int main()
{
	student s;
	s.name = "ALI";
	s.roll = 525;
	s.sec = 'B';
	cout << s.name << endl;
	cout << s.roll << endl;
	cout << s.sec << endl;
	fun(s);
	cout << s.name << endl;
	cout << s.roll << endl;
	cout << s.sec << endl;
	return 0;
}