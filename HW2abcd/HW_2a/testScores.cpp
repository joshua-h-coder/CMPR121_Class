#include <iostream>
#include <cctype>
#include "testScores.hpp"
using namespace std;

void getScores(double testScores[], int size){

	double scoreTemp;
	cout <<"Enter 5 test scores: \n";
	for(int i = 0; i < size; i++){
		
		cout << "Test #" << i+1 << ": ";
		cin >> scoreTemp;
		testScores[i] = scoreTemp;
	}
}

void showMenu(){

	cout << "A.)	Calculate the average of the test scores.\n";
	cout << "B.)	Display all test scores. \n";
}

char getChoice(){

	char choice;

	cout << "Enter your choice:	";
	cin >> choice;
	return toupper(choice);
}

void displayResult(char choice, double testScores[], int size){

	if (choice == 'A'){

		double total = 0;

		for (int i = 0; i < size; i++){

			total += testScores[i];

		}

		cout << "The average is " << total / size << endl;
		
	}else if (choice == 'B'){

		cout << "The test scores that you entered are: ";

		for (int i = 0; i < size; i++){

			cout << "Test #" << i + 1 << ": " << testScores[i] << endl;

			}
	}else
		cout << "Invaild entry!\n";

}
