#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "student_grades.hpp"

using namespace std;

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
}

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
}

void getStudentGpa(char studentGrades[5][3],double studentGpa[5], int row, int column){
	
	double tempGpa;

	for(int i = 0; i < row; i++){

		 tempGpa = 0;

                for(int j = 0; j < column; j++){
			char tempGrade = studentGrades[i][j];
			tempGpa += convertGradeToNum(tempGrade, i, j);
		}
		studentGpa[i] = tempGpa / 3;
        }

}

double convertGradeToNum(char tempGrade, int i, int j){

	

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
}

void displayStudentGpa(double studentGpa[5], int row){

	cout << "Student GPAs \n" << "Student\n";
	for (int i = 0; i < row; i++){

		cout << '#' << i+1 << '\t'
		     << fixed << setprecision(2) << studentGpa[i] << endl;
	}
}

void calAvgGpa(char studentGrades[5][3],double subAvgGpa[3], int row, int column){

        double tempGpa;

        for(int i = 0; i < column; i++){

                 tempGpa = 0;

                for(int j = 0; j < row; j++){
                        char tempGrade = studentGrades[j][i];
                        tempGpa += convertGradeToNum(tempGrade, i, j);
                }
                subAvgGpa[i] = tempGpa / 5;
        }
}

void displayAvgGpa(double subAvgGpa[3], int column){

	cout << "Average GPA by Subject.\n";
	cout << "English    History    Math\n";
	for(int i = 0; i < column; i++){
		cout << subAvgGpa[i] << setw(11);
	}
}

