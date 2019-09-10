// Program: HW_1d
// ==========================================================================
// Programmer: Joshua T. Hughes
// Class: CMPR 121
// Instructor: Dennis Rainey
//
// Description:
//    This program Searches for an ID number.
// =====================================================================
#include <iostream>
using namespace std;

int main(){
  
  int  idNumbers[]= {12345, 54321, 112233, 33211, 44411 };
  int userEntry;
  int counter = 0;
  cout << "Enter the id Number to search for: ";
  
  cin >> userEntry;
  //for loop to search through the array.
  for (int i = 0; i < 5; i++){
    //compares userEntry to each index of the array.
    if (userEntry == idNumbers[i]){
      cout << "id number is located at index " << i << ".\n";
      break;
    } else {
      counter++; //keeps track of how many indexes have been searched.
      }
  }
  //if whole area was searched then id was not found. array length was 5.
  if (counter == 5){
    cout << "id is not in the list. \n";
  }

  return 0;
}// end of main()
// ========================================================================


/* === OUTPUT =============================================================
 Where id was found in list:
     Enter the id Number to search for: 12345
     id number is located at index 0.


 Where id was not found in list:
     Enter the id Number to search for: 837372
     id is not in the list.

 */
