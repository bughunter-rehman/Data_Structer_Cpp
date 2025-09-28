#include <iostream>   //include input output library
using namespace std;   //using standard namespace
int main()          //main function
{
    int A[10] = {2,4,6,7,1};    // array of 10 elements but 5 only use
    int size = 5;   //  logical size of array
    int pos = 2; // Delete element at index 2 (value 6)	
    for (int i = pos; i < size-1; i++) {
        A[i] = A[i+1];
    }
    size--; //reduce size
    cout << "after deletion: ";  //after deletion
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";     //print updated array
    }
    cout << endl;
    return 0;
}