#include<iostream>
using namespace std;
class student
{
public:
	student(string = "AHAD", int = 49, char = 'A');
	~student();
	void getdata();
	void printdata();

private:
	string name;
	int rollno;
	char section;
};

student::student(string a,int b,char c)
{
	name = a;
	rollno = b;
	section = c;
}

student::~student()
{
	cout << "Destructor destroy object\n";
}

void student::getdata() {
	cout << "Enter the name of student\n";
	cin >> name;
	cout << "Enter the roll no of student\n";
	cin >> rollno;
	cout << "Enter the section of student\n";
	cin >> section;
}

void student::printdata() {
	cout << "The name of student is : " << name << endl;
	cout << "The roll no of student is : " << rollno << endl;
	cout << "The section of student is : " << section << endl;
}

int main() { 
	student** ptr =  new  student*[2];
	for (int i = 0; i < 2; i++) {
		ptr[i] = new student[2];
	}
	for (int row = 0; row < 2; row++) {
		for (int col = 0; col <2 ; col++) {
			ptr[row][col].getdata();
		}
	}
	for (int j = 0; j < 2; j++) {
		for (int k = 0; k < 2; k++) {
			ptr[j][k].printdata();
		}
	}
	for (int z = 0; z < 2; z++) {
		delete[] ptr[z];
	}
	delete[] ptr;
	ptr = NULL;
	return 0;
}