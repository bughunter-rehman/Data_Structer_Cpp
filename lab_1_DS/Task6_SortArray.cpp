 #include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of students: ";
     cin>> n;
     int* marks = new int[n];
    for (int i = 0; i < n; i++) {
        cout<< "Enter marks of student " << i + 1 << ": ";
        cin>> marks[i];
    }
    cout << "\nMarks entered:\n";
    for (int i = 0; i < n; i++) {
           cout << "Marks[" << i << "] = " << marks[i] << endl;
    }
    int sum = 0;
    int maxmarks =marks[0];
    int minmarks =marks[0];
    for (int i = 0; i < n; i++) {
        sum += marks[i];
        if (marks[i] > maxmarks) {
            maxmarks = marks[i];
          }
        if (marks[i] < minmarks) {
            minmarks = marks[i];
    }
    }
    cout <<"Average=" <<(float)sum /n << endl;
    cout<<"Maximum marks= " << maxmarks<< endl;
    cout << "Minimum marks= "<< minmarks<< endl;
    delete[] marks;
    return 0;
}