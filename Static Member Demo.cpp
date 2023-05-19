#include<iostream>
using namespace std;
class hello {
private:
	 static int num;
public:
	hello();
	int show();
};

int hello::num = 0;

hello::hello() {
	num ++;
}

int hello::show() {
	return num;
}

int main() {
	hello t, t1, t2;
	cout << "num" << t.show()<<endl;
	cout << "num" << t1.show()<<endl;
	cout << "num" << t2.show() << endl;
	RETURN 0;
}