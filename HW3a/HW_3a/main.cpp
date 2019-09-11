// Attached: HW3a
// ======================================================================================
// File: main.cpp
// ======================================================================================
// Programmer: Joshua T. Hughes
// Class: CMPR 121
// Instructor: Denis Rainey
//
// 	Description:
// 		
// 		This program prompts the user to enter a time in "military format".
// 		Then the program adds one second to the time and displays it.
//
// ======================================================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


struct Time
{
	int hours;
	int minutes;
	int seconds;
};

int const MAX_HOURS = 23;
int const MAX_MINS = 59;
int const MAX_SECS = 59;
bool isTimeVaild(Time &timeObject);
void getTime(Time &timeObject);
bool isTimeVaild(Time &timeObject);
void addOneSecond(Time &timeObject);
void displayTime(Time &timeObject);

// === main =============================================================================
//
// ======================================================================================
int main (){

	Time time;
	getTime(time);
	addOneSecond(time);
	displayTime(time);

	return 0;
}// end of main()
// ======================================================================================

// === getTime ==========================================================================
// INPUT: 
// 	This function recieves a Time object by referance.
//
// OUTPUT:
// 	Void returning.
//
// Description:
// 	
// 	This function prompts user to insert a time and store the time into the time
// 	object.
// ======================================================================================

void getTime(Time &timeObject){
	
	bool vaild = false;

		cout << "Enter the time in \"military time\", (24-hour format), \n";
		cout << "in the following order :   HH:MM:SS,  (Hours, Minutes, seconds)."
		     << endl;
		cout << "Hours: ";
		cin >> timeObject.hours;
		cout << "Minutes: ";
		cin >> timeObject.minutes;
		cout << "Seconds: ";
		cin >> timeObject.seconds;

		vaild = isTimeVaild(timeObject);

		if (!vaild){
			cout << "Invaild time \n";
			cout << "Press ENTER to enter a vaild time...";
			cin.ignore();
			cin.get();
			system("clear");
			getTime(timeObject);
		}

}

// === isTimeVaild ======================================================================
// INPUT:
// 	This funciton recieves a Time object.
//
// OUTPUT:
//	This function return a bool value.
//
// Description:
//
// 	This function check if the user enter a vaild time. Hours cant be greater that
// 	24, min cant be greater that 59, and seconds cant be greater than 59.
// ======================================================================================

bool isTimeVaild(Time &timeObject){
	if ((timeObject.hours >= 0) && (timeObject.hours <= MAX_HOURS) &&
	(timeObject.minutes >= 0) && (timeObject.minutes <= MAX_MINS) &&
       	(timeObject.seconds >= 0) && (timeObject.seconds <= MAX_SECS)){
		return true;
	} else{
		return false;
	}
}// end of isTimeValid
// ======================================================================================



// === addOneSecond =====================================================================
// INPUT:
// 	This function recieves a Time object.
//
// OUTPUT:
// 	void returning.
//
// Description:
// 	
// 	This function increases the time entered by one second.
//
// ======================================================================================

void addOneSecond(Time &timeObject){
	
	timeObject.seconds++;

	if (timeObject.seconds > MAX_SECS){

		timeObject.seconds = 0;
		timeObject.minutes++;
	}
	
	if (timeObject.minutes >= MAX_MINS){

		timeObject.minutes = 0;
		timeObject.hours++;
	}

	if (timeObject.hours >= MAX_HOURS){

		timeObject.hours = 0;
	}

}// end of addOneSecond()
// ======================================================================================



// === displayTime ======================================================================
// INPUT:
// 	This function recieves a Time object passed by referance.
//
// OUTPUT:
// 	Void returning.
//
// Description:
// 	
// 	This function displays the data stored in the time object.
//
// ======================================================================================

void displayTime(Time &timeObject){

	cout << "After one second had been added, the time is " 
	     << setw(2);
	cout.fill('0');
	cout << timeObject.hours;
	cout << ':' << setw(2);
	cout.fill('0');
	cout << timeObject.minutes;
	cout << ':' << setw(2);
	cout.fill('0');
	cout << timeObject.seconds << endl << endl;
}// end of displayTime();
// ======================================================================================



