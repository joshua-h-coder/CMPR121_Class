#include <iostream>
#include <string>
using namespace std;

struct Box {

	int idNum;
	double width;
	double height;
	double length;
	Box * next;
};

void insertBox(Box*& head);

void displayLtoR(Box*& head);
