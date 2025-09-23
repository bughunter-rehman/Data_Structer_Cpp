#include <iostream>
using namespace std;
int main() {
    int* p = new int(50);  // dynamically allocate an integer and assign it to pointer p
cout << "*p before delete: " << *p << "\n";     // Output the value pointed to by p
 delete p;                    // free the allocated memory
 p = nullptr;          // set pointer to nullptr after delete
cout << "Pointer safely set to nullptr after delete.\n";
 return 0;
}