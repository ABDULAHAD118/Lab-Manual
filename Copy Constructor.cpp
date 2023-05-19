#include <iostream>
#include <string>
using namespace std;
class student {
private:
	string name;
	int rollno;
	char section;
public:
	student(string ="Ahad", int=549, char='A');
	student(student& s);
	void showdata();

};
student::student(string a,int b,char c){
	name=a;
	rollno=b;
	section=c;
	
}

student::student(student &s) {
	name = s.name;
	rollno = s.rollno;
	section = s.section;
}

void student:: showdata() {
	cout<<name<<endl<<rollno<<endl<<section ;
}

int main() {
	student s(  "Ahad", 3);
	student s1(s);
	cout << "Before Copy\n";
	s.showdata();
	cout << "\nAfter copy\n";
	s1.showdata();
	return 0;
}
