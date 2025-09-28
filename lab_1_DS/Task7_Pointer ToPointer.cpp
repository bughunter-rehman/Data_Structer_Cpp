#include <iostream>
using namespace std;
int main()
{
    int x=42;     // integer variable
    int* p = &x;   // pointer variable
    int** q = &p;   // pointer to pointer variable
    cout << "x:"<<x<<"\n";     
    cout <<"*p: "<<*p<< "\n";
    cout <<"**q: " << **q << "\n";
    **q = 100;
    cout << "After **q=100, x: "<<x<<"\n";    // x is now 100
    return 0;
}