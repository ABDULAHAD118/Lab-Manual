#include<iostream>
using namespace std;
class A {
protected:
	int x;
public:
	A(int a=0) {
		cout << "\nA: Constructor\n";
		x = a;
	}

	~A() {
		cout << "\nObject of Class A is Destroyed\n";
	}

	void print() {
		cout << "x = " << x;
	}
};

class B :public A {
public:
	B():A() {
		cout << "\nB:Constructor\n";
	}
	
	B(int a):A(a) {
		cout << "\nB:Constructor with one parameter\n";
	}

	~B() {
		cout << "\nObject of Class B is Destroyed\n";
	}
	
	void print() {
		cout << "x = " << x;
	}
};

int main() {
	B b(5);
	b.print();
	A a(3);
	a.print();
	return 0;
}