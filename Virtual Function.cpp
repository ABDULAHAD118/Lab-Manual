#include<iostream>
using namespace std;
class base {
protected:
	int x;
public:
	base(int a = 0){
		cout << "\nBase class constructor\n";
		x = a;
	}

	~base() {
		cout << "\nObject of base class is Destroyed\n";
	}
	virtual void print() {
		cout << "Base Class Function\n";
		cout << "x = " << x << endl;
	}
};

class derived :public base {
public:
	derived() :base() {
		cout << "\nDerived class constructor\n";
	}

	derived(int a) :base(a) {
		cout << "\nDerived class constructor with one parameter\n";
	}

	~derived() {
		cout << "\nDerives class object is destroyed\n";
	}

	void print() {
		cout << "\nDerived class function\n";
		cout << "x = " << x << endl;
	}
};

int main() {
	base *ptr, b(3);
	derived d(6);

	d.print();
	b.print();

	ptr = &d;

	ptr->print();
	return 0;
}