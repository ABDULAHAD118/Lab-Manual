#include<iostream>
#include<string>
using namespace std;
class date{
	private:
		int day;
		int month;
		int year;
	public:
		date(int = 01 , int = 01 , int = 2023);
		~date();
		void print()const;
};


date::date(int d,int m,int y){
	day = d;
	month = m;
	year = y;
}
date::~date(){
	cout<<"\nObject Destroyed";
}
void date::print()const{
	cout<<"Day : "<<day<<"\nMonth : "<<month<<"\nYear : "<<year;
}
class employee{
	private:
		string name;
		int age;
		date hiredate;
	public:
		employee(string = "Ahad", int = 19,int = 01,int = 01,int = 2023);
		~employee();
		void print()const; 
};
employee::employee(string a,int b,int c,int d,int e):hiredate( c, d, e){
	name = a;
	age = b;
}
void employee::print()const{
	cout<<"Name : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
	hiredate.print();
}
employee::~employee(){
	cout<<"\nObject destroyed";
}
int main(){
	employee emp("Abdulahad",18,02,02,2022);
	emp.print();
	return 0;