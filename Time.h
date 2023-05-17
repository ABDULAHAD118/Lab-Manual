#ifndef Time_H
#define Time_H
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
#endif // !Time_H

