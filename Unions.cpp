#include<iostream>
using namespace std;
union f {
	int age;
	int rollno;
}foo;
int main(){
	union f x;
	x.age = 18;
	x.rollno = 548;
	cout << x.age<<endl;
	cout << x.rollno;
	return 0;
}