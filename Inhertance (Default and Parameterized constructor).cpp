#include<iostream>
using namespace std;
class A {
protected:
	int length;
	int width;
	int height;
public:
	A(int = 0, int = 0, int = 0);
	~A();
	void print();
};

A::A(int a, int b, int c) {
	cout << "\nA:Constructor\n";
	length = a;
	width = b;
	height = c;
}



A::~A() {
	cout << "\nObject of A class is Destroyed\n";
}

void A::print() {
	cout << "LENGTH = " << length << endl;
	cout << "WIDTH = " << width << endl;
	cout << "HEIGHT = " << height << endl;
}

class B:public A {
public:
	B() {
		cout << "\nB:Constructor\n";
	}

	B(int a) : A(a){
		cout << "\nB:Constructor with one parameter\n";
	}
	
	B(int a,int b) :A(a,b){
		cout << "\nB:Constructor with two parameter\n";
	}
	
	B(int a,int b,int c) :A(a,b,c){
		cout << "\nB:Constructor with three parameter\n";
	}

	~B() {
		cout << "\nObject of B class is Destroyed\n";
	}
	void print() {
		A::print();
	}
};


int main() {
	B b(4,3,5);
	b.print();

	return 0;
}
