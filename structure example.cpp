#include <iostream>
using namespace std;
struct Person {
    string name;
    int age;
    double height;
};

int main() {

    Person person1;

    cout<<"Enter the name of person\n";
	cin>>person1.name;
	cout<<"Enter the age of persion\n";
    cin>>person1.age;
    cout<<"Enter the height of person in feet\n";
    cin>>person1.height;

    cout << "The name of person is : " << person1.name << endl;
    cout << "The age of person is : " << person1.age << endl;
    cout << "The height of person is: " << person1.height <<" feet"<< endl;

    return 0;
}

