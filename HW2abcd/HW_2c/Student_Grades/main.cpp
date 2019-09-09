// Program: HW_2c(Student Grades)
// =============================================================================================
// Attached: main.cpp, student_grades.hpp, student_grades.cpp
// =============================================================================================
// File: main.cpp
// =============================================================================================
// Programmer: Joshua T. Hughes
// Class: CMPR121
// Instructor: Dennis Rainey
//
// Description:
//
// 	This program is seporated into three files. main.cpp files holds
// 	the main function that makes all the function calls. 
// 	student_grades.hpp file is the header file that holds all the
// 	function declearations. student_grades.cpp is the file that holds
// 	the function deffinitions (for organization purposes).
//
// 	This program reads grades from a file. Then displays the information 
// 	by student and the grade they recieved in a specific subject. Next 
// 	the program then calculates the students GPA and displays the 
// 	information by student. Final the program calculates the average 
// 	GPA for each subject and displays the info by subject. 
// ============================================================================================

#include <iostream>
#include "student_grades.hpp" //Cpp header file
using namespace std;

// === main ===================================================================================
//
// ============================================================================================

int main(){

	
	int const ROW = 5;
	int const COLUMN = 3;
	char studentGrades[ROW][COLUMN];
	double studentGpa[ROW];
	double subAvgGpa[COLUMN];

	readFromFile(studentGrades, ROW, COLUMN);        //function call
	displayStudentGrades(studentGrades, ROW, COLUMN); 

	cout << endl;

	getStudentGpa(studentGrades, studentGpa, ROW, COLUMN); 
	displayStudentGpa (studentGpa, ROW);

	cout << endl;

	calAvgGpa(studentGrades, subAvgGpa, ROW, COLUMN);
	displayAvgGpa(subAvgGpa, COLUMN);

	cout << endl;
	return 0;
} //end of main
// =============================================================================================
/*
OUTPUT:

All Grades
Sutdent   English   History   Math
#1        A         A         B
#2        C         C         F
#3        C         D         B
#4        B         A         C
#5        B         A         B

Student GPAs
Student
#1	3.67
#2	1.33
#3	2.00
#4	3.00
#5	3.33

Average GPA by Subject.
English    History    Math
2.80       3.00       2.20
*/

