#include<iostream>       //use for input output library
using namespace std;       //standers library
 int main()                //main function
{                             //start main function
 int x[10];                //static array
 int  n = 5;             //array size
 for(int i=0;i<n;i++)         //loop for assign value
 {
   x[i] = i + 1;           //assign value
 }
 x[n] =99;            //insert value at end
 n++;               //increase array size
 cout<<"after insertion :";    //print array after insertion
 for(int i=0;i<n;i++)          //loop for print array
 {
   cout<<x[i]<<" ";           //print array elements
 }
 cout<<"endl";  //new line
    return 0; 
}