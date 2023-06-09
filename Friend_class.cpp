#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		string name;
		int rollno;
		char section;
	public:
		student(){
			name = "Ahad";
			rollno = 549;
			section = 'A';
		}
		friend class data;
};

class data{
	public:
		void print(student& s){
			cout<<"The value of private : "<<s.name<<" "<<s.rollno<<" "<<s.section<<endl;
		}
};

int main(){
	student stu;
	data d;
	d.print(stu);
	return 0;
}