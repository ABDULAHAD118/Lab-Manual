#include<iostream>
using namespace std;
class A {
protected:
	int x;
public:
	A(int a=0) {
		cout << "\nA:Default constructor\n";
		x = a;
	}

	~A() {
		cout << "\nObject of class A is Destroyed\n";
	}

	virtual void show() {
		cout << "\nBase Class Show Function\n";
		cout << "x = " << x << endl;
	}
};

class B :public A {
public:
	B() {
		cout << "\nB:Default Constructor\n";
	}
	B(int a):A(a) {
		cout << "\nB:Constructor with one parameter\n";
	}
	~B(){
		cout << "\nObject of class B is Destroyed\n";
	}
	void show() {
		cout << "\nDerived Class B Show Function\n";
		cout << "x = " << x << endl;
	}
};

class C :public A {
public:
	C() {
		cout << "\nC:Default Constructor\n";
	}
	C(int a) :A(a) {
		cout << "\nC:Constructor with one parameter\n";
	}
	~C() {
		cout << "\nObject of class C is Destroyed\n";
	}
	void show() {
		cout << "\nDerived Class C Show Function\n";
		cout << "x = " << x << endl;
	}
};


int main() {
	A a(4),*ptr;
	a.show();
	B b(3);
	b.show();
	C c(88);
	c.show();
	int number;
	cout << "Enter the number ";
	cin >> number;
	if (number % 2) {
		ptr = &b;
	}
	else
	{
		ptr = &c;
	}

	ptr->show();
}