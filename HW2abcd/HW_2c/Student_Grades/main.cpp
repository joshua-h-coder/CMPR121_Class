#include <iostream>
#include "header.hpp"
using namespace std;

int main(){

	
	int const ROW = 5;
	int const COLUMN = 3;
	char studentGrades[ROW][COLUMN];
	double studentGpa[ROW];
	double subAvgGpa[COLUMN];

	readFromFile(studentGrades, ROW, COLUMN);
	displayStudentGrades(studentGrades, ROW, COLUMN);

	cout << endl;

	getStudentGpa(studentGrades, studentGpa, ROW, COLUMN);
	displayStudentGpa (studentGpa, ROW);

	cout << endl;

	calAvgGpa(studentGrades, subAvgGpa, ROW, COLUMN);
	displayAvgGpa(subAvgGpa, COLUMN);

	cout << endl;
	return 0;
}

