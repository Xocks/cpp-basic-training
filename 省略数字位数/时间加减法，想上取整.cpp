#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>
int main() {
	int s, v;
	cin >> s >> v;
	int time = (s + v - 1) / v + 10;//用数学方法向上取整
	int hours = time / 60 ;
	int minutes = time % 60 ;
	
	int lasthours = 8 - hours;
	int lastminutes = 0 - minutes;
	if (lastminutes < 0) {
		lastminutes += 60;
		lasthours -= 1;//易错，8点的前一分钟是七点59，小时也要减去1
	}
	if (lasthours < 0) {
		lasthours += 24;
	}

	cout << setw(2) << setfill('0') << lasthours << ":" << setw(2) << setfill('0') << lastminutes;
	return 0;

}
