#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
int main(){
	int seconds = 0;
	int hours;
	int minutes;
	string time;
	string day;
	string day1, month, year;
	cout << "Enter hour: \n";
	cin >> hours;
	cout << "Enter minute: \n";
	cin >> minutes;
	cout << "Enter AM/PM: \n";
	cin >> time;
	int minutes1;
	minutes1 = minutes;
	cout << "Enter the day you want to set: \n";
	cin >> day;
	while(true){
		system("cls");
		cout << hours << " : " << minutes << " "<< time << "\n";
		
		cout << day;
		seconds++;
		
		if(seconds == 60){
			minutes++;
			minutes1++;
			seconds = 0;
		} 
		if(minutes == 60){
			hours++;
			minutes = 0;
			seconds = 0;
			minutes1 = 0;	
		}
		if(minutes1 == 0 && hours == 13 && time == "AM"){
			hours = 1;
			minutes = 0;
			minutes1 = 0;
			seconds = 0;
			time = "PM";
		}
		if(minutes1 == 0 && hours == 13 && time == "PM"){
			hours = 1;
			minutes = 0;
			minutes1 = 0;
			seconds = 0;
			time = "AM";
		}	
		sleep(1);
	}
	
	return 0;
}
