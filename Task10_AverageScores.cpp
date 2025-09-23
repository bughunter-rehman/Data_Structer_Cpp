#include <iostream>
using namespace std;
int main(){
int n;
 cout << "How many scores? ";   
cin >> n;
 int* scores = new int[n];          // dynamically allocate array
cout << "Enter " << n << " scores:\n";        // read scores
 for (int i = 0; i < n; ++i) {             // input scores
       cin >> scores[i];          // store in array
    }
 long long sum = 0;               // compute sum of scores
 for (int i = 0; i < n; ++i) {
       sum += scores[i];
}
cout << "Average = " << (double)sum / n << "\n";      // output average
delete[] scores;               // free memory
scores = nullptr;         
 return 0;
}