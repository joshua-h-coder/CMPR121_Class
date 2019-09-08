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
	displayResult(choice, testScores, SIZE);
	return 0;

}
