// Game Time with Minutes

#include <iostream>
#define HOUR 60
#define DAY 24
using namespace std;


void finalTime(int hours_in_minutes, int hour_start, int hour_finish,int minute_start, int minute_finish) {
	int minutes = 0;
	int count_hour = 0;
	if (hour_start == hour_finish && minute_start < minute_finish) {
		minutes = minute_finish - minute_start;
		cout << "O JOGO DUROU 0 HORA(S) E " << minutes << " MINUTO(S)" << endl;
		exit(0);
	}
	if (minute_finish > minute_start) {
		minutes = minute_finish - minute_start;
		minutes = hours_in_minutes + minutes;
		minutes = minutes % HOUR;
	}
	else if (minute_start > minute_finish) {
		minutes = minute_finish - minute_start;
		minutes* (-1);
		minutes = hours_in_minutes + minutes;
		minutes = minutes % HOUR;
		hours_in_minutes = hours_in_minutes - HOUR;
	}
	cout << "O JOGO DUROU " << hours_in_minutes / HOUR << " HORA(S) E " << minutes << " MINUTO(S)" << endl;
}

int hourDuration(int hour_start, int hour_finish) {
	int final_hour;
	hour_start = hour_start * HOUR;
	hour_finish = hour_finish * HOUR;

	if (hour_start < hour_finish) {
		final_hour = hour_finish - hour_start;
		return final_hour;
	}
	else if (hour_start > hour_finish || hour_start == hour_finish) {
		final_hour = (DAY * HOUR) - hour_start + hour_finish;
		return final_hour;
	}
}


int main() {
	int hour_start, minute_start;
	int hour_finish, minute_finish;
	cin >> hour_start >> minute_start >> hour_finish >> minute_finish;
	int hours_in_minutes = hourDuration(hour_start, hour_finish);
	finalTime(hours_in_minutes, hour_start, hour_finish, minute_start, minute_finish);
	
	return 0;
}