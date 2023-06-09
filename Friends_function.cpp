#include<iostream>
using namespace std;
class show{
	friend void setvalue(show&,int);
	private:
		int x;
	public:
		show(int = 0);
		~show();
		void print();
};

show::show(int a){
	x=a;
}

show::~show(){
	cout<<"\nObject Destroyed";
}

void show::print(){
	cout<<"The value of x : "<<x;
}

void setvalue(show& a,int b){
	a.x = b;
}

int main(){
	show obj,obj1(19);
	obj.print();
	cout<<endl;
	obj1.print();
	return 0;
}