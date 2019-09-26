#include "Boxes.h"

void insertBox(Box*& head){

	Box * temp = new Box;

	cout << "ID Number:	";
	cin >> temp->idNum;
	cout << "Width:	";
	cin >> temp->width;
	cout << "Height: ";
	cin >> temp->height;
	cout << "Length: ";
	cin >> temp->length;

	temp->next = head;
	head = temp;

}

void displayLtoR(Box*& head){

	Box* temp = head;
	cout << "Here is the list of Boxes, from left to right: \n";

	while(temp != nullptr){

		cout << "ID Number:  " << temp->idNum << endl;
		cout << "Width:  " << temp->width << endl;
		cout << "Height:  " << temp->height << endl;
		cout << "Length:  " << temp->length << endl;
		temp = temp->next;

	}
}
