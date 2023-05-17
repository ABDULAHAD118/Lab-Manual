#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int student[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the rollno of " << i + 1 << " Student\n";
		cin >> student[i];
	}

	cout << "The rollno of student is :\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "The roll of " << i + 1 << " Student is " << student[i] <<endl;
	}
	vector<int>myvector;

	myvector.push_back(6);
	myvector.push_back(7);
	myvector.push_back(8);
	cout << "Vector values\n";
	for (int i = 0; i < myvector.size(); i++)
	{
		cout << myvector.at(i) << endl;
	}
	return 0;
}