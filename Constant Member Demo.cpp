#include<iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inches;
	public:
		Distance(int = 0, float = 0.0);
		void showdist()const {
		
			cout<<"Feet: "<<feet<<"\nInches: "<<inches;
		}

};

Distance::Distance(int ft, float inc) {
	feet = ft;
	inches = inc;
}

int main() {
	const Distance d,d1(11, 19.4);
	d.showdist();//When no vlue is given show default value 
	cout << endl;
	d1.showdist();
	return 0;
}