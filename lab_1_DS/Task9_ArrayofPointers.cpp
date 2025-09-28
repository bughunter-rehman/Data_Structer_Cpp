#include <iostream>
using namespace std;
int main() {
 const char* names[] = {"Ali","Zubair","Hamad","Ali","Hamza"};  //array of pointers to string literals
 int n = sizeof(names) / sizeof(names[0]);             //number of elements in the array
 for (int i = 0; i < n; ++i) {                      //iterate and print each string
cout << "names[" << i << "] -> " << names[i] << "\n";     //print all string
  }       
   const char* replacement = "Fatima";          //new string 
 names[2] = replacement;           //change  third element  point  the new string
  cout << "After change, names[2] -> " << names[2] << "\n"; //print updated  string
 return 0;
}