#include <iostream>
using namespace std;
int main() {
    int a =20;     // integer variable
    int* p =&a;     //  pointer variable
    cout<<"a before" <<a<< "\n";  // a is 20
    *p = *p + 5;               // a is now 25
    cout<<"a after: "<<a<< "\n";   // a is 25
 return 0;
}