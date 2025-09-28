#include <iostream> //include input output library
using namespace std; //using standsard namespace
int main()          //main function 
{    
    int A[10] = {2,4,6,7,1}; // array of size 10 but use 5
    int size = 5;           //      size of array
    int pos = 3;      // index where we want to insert
    int val = 9;      //new value to insert
    for (int i = size; i > pos; --i) //shift element right from the end untill position
	{
        A[i] = A[i-1];
    }
    A[pos] = val; // Place the new value
    size++; // Update logical size
  cout << "After insertion: ";
    for (int i = 0; i < size; i++) {
  cout << A[i] << " "; // Print updated array
}
	    cout << endl;
return 0;
}