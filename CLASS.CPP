#include<iostream>
#include<string>
using namespace std;
class Time {
private:
	int hours;
	int minutes;
	int seconds;
public:
	Time();
	void setTime(int, int, int);
	void printMilitryTime();
	void printStandardTime();
};

Time::Time() { hours = minutes = seconds = 0 ;}

void Time::setTime(int h, int m, int s) {
	hours = (h >= 0 && h < 24) ? h:0 ;
	minutes = (m >= 0 && m < 60) ? m:0 ;
	seconds = (s > 0 && s < 60) ?  s:0 ;
}

void Time::printMilitryTime() {
	cout<< (hours < 10 ? "0" : "") << hours << ":" << (minutes < 10 ? "0" : "")<< minutes;
}

void Time::printStandardTime() {
	cout << ((hours == 0 || hours == 12) ? 12 : hours % 12);
	cout << ":" << (minutes < 10 ? "0" : "") << minutes;
	cout << ":" << (seconds < 10 ? "0" : "") << seconds;
	cout<< (hours < 12 ? " AM" : " PM");
}

int main() {
	int a, b, c;
	string userEnter;
	Time t;
	cout << "The initial Militry Time is:\n";
	t.printMilitryTime();
	cout << "\nThe initial Standard Time is:\n";
	t.printStandardTime();
	while (true) {
		cout << "\nEnter the time you want to set (hours:minutes:seconds):\n";
		cin >> a >> b >> c;
		t.setTime(a, b, c);
		cout << "The initial Militry Time is:\n";
		t.printMilitryTime();
		cout << "\nThe initial Standard Time is:\n";
		t.printStandardTime();
		cout << "\nAre you want to stop this loop if yes than type 'end'\n";
		cin >> userEnter;
		if (userEnter == "end")
			break;
		else
			continue;
	}
	return 0;
}