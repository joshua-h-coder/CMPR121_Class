#include "Boxes.h"

int main()
{
	cout << "Enter the specifications of different types of boxes." << endl;
	cout << "include the number of boxes presently in inventory.";
	cout << "Enter boxes - (-1 to quit): ";

	Box * head = nullptr;
	int answer = 1;

	while(answer != -1)
	{
		insertBox(head);
		cin >> answer;
	}

	char ans;
	cout << "Would you like to see the list? (Y / n)?";
	cin >> ans;
	if (toupper(ans) == 'Y'){
		
		displayLtoR(head);
	}

}	
