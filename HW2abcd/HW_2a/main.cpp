// Packet: HW_2(a,b,c,d)
// =======================================================================
// Program: HW_2a
// =======================================================================
// Attached: main.cpp, testScores.hpp, testScores.cpp
// =======================================================================
// Programmer: Joshua T. Hughes
// Class: CMPR 121
// Instructor: Denis Rainey
// 
// Description:
//
// 	This program prompts user to enter 5 test scores. The prompts user
// 	to choice if they would like the average of the test scores or
// 	to have the test scores displayed to the screen.
//
// ========================================================================

#include <iostream>
#include "testScores.hpp"
using namespace std;

int main(){
	
	char choice;
	int const SIZE = 5;
	double testScores[SIZE];
	
	getScores(testScores, SIZE);
	
	system("clear");
	
	showMenu();
	choice = getChoice();
	
	system("clear");
	
	displayResult(choice, testScores, SIZE);
	
	
	return 0;

}//end of main();
// =========================================================================
/*
OUTPUT:

Enter 5 test scores: 
Test #1: 99
Test #2: 77
Test #3: 86
Test #4: 59
Test #5: 92

---- screen clears ----------

A.)	Calculate the average of the test scores.
B.)	Display all test scores.
Enter your choice:	A

---- screen clears ----------

The average is 82.6

*/

