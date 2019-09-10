// File: testScores.cpp
// =========================================================================
// Programmer: Joshua T. Hughes
// Class: CMPR 121
// Instructor: Dennis Rainey
//
// Description:
// 	
// 	This file contains the function definitions for the program.
//
// =========================================================================
#include <iostream>
#include <cctype>
#include "testScores.hpp"
using namespace std;

// === getScores ===========================================================
// INPUT:
// 	
// 	This function recieves and double array called testScores and the
// 	size of the array as an int var.
//
// OUTPUT:
//
// 	N/A
//
// Description:
// 	
// 	This function get an input from the user and stores them in an
// 	array.
//
// =========================================================================
void getScores(double testScores[], int size){

	double scoreTemp;
	cout <<"Enter 5 test scores: \n";
	for(int i = 0; i < size; i++){
		
		cout << "Test #" << i+1 << ": ";
		cin >> testScores[i];
	}
}// end of getScores();
// =========================================================================



// === showMenu ============================================================
// INPUT:
// 	
// 	N/A
//
// OUTPUT:
//
// 	N/A
//
// Description:
//
// 	This function displays a menu.
//
// =========================================================================

void showMenu(){

	cout << "A.)	Calculate the average of the test scores.\n";
	cout << "B.)	Display all test scores. \n";
}// end of showMenu()
// ========================================================================



// === getChoice ============================================================
// INPUT:
//
// 	N/A
//
// OUTPUT:
// 	
// 	Returns a char variable which represent the users choice.
//
// Description:
//
// 	This function captures the users choice then returns it to the main
// 	function.
// ==========================================================================

char getChoice(){

	char choice;

	cout << "Enter your choice:	";
	cin >> choice;
	return toupper(choice);
}//end of getChoice();
// ==========================================================================



// === displayResult ========================================================
// INPUT:
//
// 	This funtion recieves a char variable called choice, a double array
// 	called testScores, and the size of the array as size.
//
// OUTPUT:
// 	
// 	N/A
//
// Description:
//
// 	This function display ethier the average of the test scores
// 	or the test scores themselves based on the user's choice.
//
// ==========================================================================
void displayResult(char choice, double testScores[], int size){

	if (choice == 'A'){

		double total = 0;

		for (int i = 0; i < size; i++){

			total += testScores[i];

		}

		cout << "The average is " << total / size << endl;
		
	}else if (choice == 'B'){

		cout << "The test scores that you entered are: " << endl;

		for (int i = 0; i < size; i++){

			cout << "Test #" << i + 1 << ": " << testScores[i] 
			     << endl;
			}
	}else
		cout << "Invaild entry!\n";

}// end of displayResult();
// =============================================================================
