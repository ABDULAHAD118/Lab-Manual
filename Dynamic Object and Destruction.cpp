#include<iostream>
using namespace std;
class heap {
private:
	int num;
public:
	heap(int = 0);
	~heap();
	void showdata();
};

heap::heap(int a){
	num = a;
}

heap::~heap() {
}

void heap::showdata() {
	cout << num;
}

int main() {
	heap* ptr = new heap;
	*ptr = 9;
	ptr->showdata();
	delete ptr;
	return 0;
}