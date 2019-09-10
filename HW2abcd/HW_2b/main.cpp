// Program: HW_2b
// =======================================================================
// Attached: main.cpp, 2D_Array.hpp, 2D_Array.cpp
// =======================================================================
// Programmer: Joshua T. Hughes
// Class: CMPR 121
// Instructor: Denis Rainey
// 
// Description:
//
//      This program simply prompts user to get 12 numbers then displays
//      them onto the screen in four columns and 3 rows.
//
// ========================================================================

#include <iostream>
#include <array>
#include "2D_Array.hpp"
using namespace std;


// === main ===============================================================
//
// ========================================================================
int main(){

	int numArray[3][4];
	getData(numArray);
	displayArray(numArray);

	return 0;
} // End of main()
// ========================================================================
/*
OUTPUT:
	
Enter a number:   8
Enter a number:   5
Enter a number:   54
Enter a number:   1
Enter a number:   65
Enter a number:   15
Enter a number:   156
Enter a number:   156
Enter a number:   156
Enter a number:   156
Enter a number:   156165
Enter a number:   1561
8	5	54	1	
65	15	156	156	
156	156	156165	1561	
*/
