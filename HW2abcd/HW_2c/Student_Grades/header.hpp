#include <iostream>
using namespace std;

void readFromFile(char studentGrades[5][3], int row, int column);

void displayStudentGrades(char studentGrades[5][3], int row, int column);

void getStudentGpa(char studentGrades[5][3], double studentGpa[5], int row, int column);

double convertGradeToNum(char studentGrades, int i, int j);

void displayStudentGpa(double studentGpa[5], int row);

void calAvgGpa(char studentGrades[5][3], double subAvgGpa[5], int row, int column);

void displayAvgGpa(double subAvgGpa[3], int column);
