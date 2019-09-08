#include <iostream>
#include <array>
#include "2D_Array.hpp"
using namespace std;

void getData(int numArray[3][4]){

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			cout << "Enter a number:   ";
			cin >> numArray[i][j];
		}
	}
}

void displayArray(int numArray[3][4]){

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			cout << numArray[i][j] << '\t';
		}
		cout << endl;
	}
}
