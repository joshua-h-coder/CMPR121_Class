// File: 2D_Array.hpp
// =========================================================================
// Programmer: Joshua T. Hughes
// Class: CMPR 121
// Instructor: Dennis Rainey
//
// Description:
//      
//      This file contains the function declarations for the program.
//
// =========================================================================

#include <iostream>
#include <array>
#include "2D_Array.hpp"
using namespace std;

// === getData =============================================================
// INPUT: 
//
// 	This funtion recieves an 2D int array called numArray from the main
// 	function.
//
// OUTPUT:
// 	
// 	N/A
//
// Description:
// 	
// 	This function prompts user to enter a number 12 times while store
// 	each number into a 2D array called numArray.
// 
//  ========================================================================

void getData(int numArray[3][4]){

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			cout << "Enter a number:   ";
			cin >> numArray[i][j];
		}
	}
}// end of getData();
// =========================================================================



// === displayArray ========================================================
// INPUT:
//
// 	This function recieves a 2D int array called numArray from the main
// 	function. 
//
// OUTPUT:
//
//	N/A
//
// Description:
//	
//	This function displays the data that was enter into the 2D array
//	numArray in a 4 by 3 table.
//
// ========================================================================

void displayArray(int numArray[3][4]){

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			cout << numArray[i][j] << '\t';
		}
		cout << endl;
	}
}// end of displayArray();
// ========================================================================

