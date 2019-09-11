// File: student_grades.cpp
// ===============================================================================================
// Programmer: Joshua T. Hughes
// Class: CMPR121
// Instructor: Dennis Rainey
//
// 	Decription:
// 		
// 		This is the file that holds the function definitions for the program.
//
// ===============================================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "student_grades.hpp"
using namespace std;


// === readFromFile ==============================================================================
// INPUT:
// 	
// 	This function recieves studentGrades as a 2D char array, the number of rows as row, and
// 	the number of columns as column.
//
// OUTPUT:
//
// 	N/A
//
// Decription:
//
// 	This funtion reads from a file named "grades.dat" and assigns those valuese to a 2D
// 	char array called studentGrades.
//
// ===============================================================================================
 
void readFromFile(char studentGrades[5][3], int row, int column){
	ifstream inFile;

	inFile.open("/home/cmp/Desktop/CMPR121_Class/HW2abcd/HW_2c/Student_Grades/grades.dat");


	while(!inFile.eof()){
		
		for(int i = 0; i < row; i++){
			for (int j = 0; j < column; j++){

				inFile >> studentGrades[i][j];
			}
		}
	}
	inFile.close();
}// end of readFromFile();
// ===============================================================================================



// === displayStudentGrades ======================================================================
// INPUT:
// 	
// 	This function recieve studentGrades as a 2D char array, the number of rows as row, and 
// 	the number of columns as column.
//
// OUTPUT: 
// 	
// 	Organizes and display the data stored in the 2D array studentGrades. 
//
// Decription:
// 	
// 	This function display's all of the students and all of thier grades.
//
// ================================================================================================	

void displayStudentGrades(char studentGrades[5][3], int row, int column){

	cout << "All Grades" << endl;
	cout << "Sutdent   English   History   Math" << endl;
	
	for(int i = 0; i < row; i++){
		
		cout << "#" << i + 1 << setw(9) <<  studentGrades[i][0];

		for(int j = 1; j < column; j++){
			
			cout << right << setw(10)
			     << studentGrades[i][j];
		}
		
		cout << endl;
	}
}// end of displayStudentGrades();
// =================================================================================================



// === getStudentGpa ===============================================================================
// INPUT:
// 	
// 	This function recieves a 2d char array called studentGrades, a double array called 
// 	studentGpa, the number of rows as row and the number of columns as column.
//
// OUTPUT:
// 	
// 	N/A
//
// Decription:
// 	
// 	This function sends each letter grade to be converted into a number. Then uses those
// 	numbers to calculate each students GPA and store them into a new array.
//
// ================================================================================================= 

void getStudentGpa(char studentGrades[5][3],double studentGpa[5], int row, int column){
	
	double tempGpa;

	for(int i = 0; i < row; i++){

		 tempGpa = 0;

                for(int j = 0; j < column; j++){
			char tempGrade = studentGrades[i][j];
			tempGpa += convertGradeToNum(tempGrade);
		}
		studentGpa[i] = tempGpa / 3;
        }

} //end of getStudentGpa();
// ==================================================================================================



// === convertGradeToNum ============================================================================
// INPUT:
// 	
//	Recieves a char variable called tempGrade from the getStudentGpa function.
//
// OUTPUT:
//
// 	This function returns a double variable back to the getStudentGpa function.
//
// Description:
//
// 	This function converts the grade from a letter grade to a double value and returns that value
// 	to the function getStudentGpa.
//
// ==================================================================================================

double convertGradeToNum(char tempGrade){

	

	if (tempGrade == 'A'){
		return 4.0;
	} else if (tempGrade == 'B'){
		return 3.0;
	}else if (tempGrade == 'C'){
                return 2.0;
        }else if (tempGrade == 'D'){
                return 1.0;
        }else {
                return 0.0;
        }
}// end of convertGradeToNum();
// ===================================================================================================



// === displayStudentGpa =============================================================================
// INPUT:
//
// 	This function recieves an double array called studentGpa.
//
// OUTPUT:
//
// 	N/A
//
// Description:
// 	
// 	This function displays the students GPA.
//
// ==================================================================================================

void displayStudentGpa(double studentGpa[5], int row){

	cout << "Student GPAs \n" << "Student\n";
	for (int i = 0; i < row; i++){

		cout << '#' << i+1 << '\t'
		     << fixed << setprecision(2) << studentGpa[i] << endl;
	}
}//end of displayStudentGpa()



// === calAvgGpa ======================================================================================
// INPUT:
//
// 	This function recieves a 2D char array called studentGrades, a double array subAvgGpa, and
// 	the number of rows as row and the number of columns as column.
//
// OUTPUT:
//
// 	N/A
//
// Description:
//
// 	This fuction calculates the average GPA for each subject and stores them in the subAvgGpa 
// 	array.
//
// ====================================================================================================

void calAvgGpa(char studentGrades[5][3],double subAvgGpa[3], int row, int column){

        double tempGpa;

        for(int i = 0; i < column; i++){

                 tempGpa = 0;

                for(int j = 0; j < row; j++){
                        char tempGrade = studentGrades[j][i];
                        tempGpa += convertGradeToNum(tempGrade);
                }
                subAvgGpa[i] = tempGpa / 5;
        }
}// end of calAvgGpa;
// ==================================================================================================



// === displayAvgGpa =================================================================================
// INPUT: 
//
// 	This function recives the double array subAvgGpa and the number of columns as column. 
//
// OUTPUT:
//
// 	N/A
//
// Description:
// 	
// 	This fuction displays the average GPA of each subject.
//
// ======================================================================================================

void displayAvgGpa(double subAvgGpa[3], int column){

	cout << "Average GPA by Subject.\n";
	cout << "English    History    Math\n";
	for(int i = 0; i < column; i++){
		cout << subAvgGpa[i] << setw(11);
	}
}//end of displayAvgGpa()
// =======================================================================================================


