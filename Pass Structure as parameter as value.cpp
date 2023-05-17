#include <iostream>
using namespace std;
struct student {
	string name;
	int rollno;
	char section;
};

void fun(student s1)
{
	cout << s1.name<<endl;
	cout << s1.rollno<<endl;
	cout << s1.section<<endl;

}

int main()
{
	student s;
	s.name = "ABDULAHAD";
	s.rollno = 549;
	s.section = 'A';
	fun(s);
	return 0;
}