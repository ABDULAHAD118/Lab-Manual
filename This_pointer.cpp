#include<iostream>
using namespace std;
class student{
	private:
		int rollno;
		char section;
	public:
		student(int = 549 , char = 'A');
		~student();
		student& getdata();
		student& printdata();
};

student::student(int a , char b){
	this->rollno = a;
	this->section = b;
}

student::~student(){
	cout<<"\nObject destroyed\n";
}

student& student::getdata(){
	cout<<"\nEnter the roll no of student :";
	cin>>this->rollno;
	cout<<"Enter the section of student :";
	cin>>this->section;
	return *this;
}

student& student::printdata(){
	cout<<"Using This Pointer\n";
	cout<<"The Roll No of Student is : "<<this->rollno;
	cout<<"\nThe Section of Student is : "<<this->section;
	return *this;
}

int main(){
	student s(558,'B');
	s.printdata().getdata().printdata();
	return 0;
}