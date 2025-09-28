#include<iostream>
using namespace std;
int main(){
   int x[6]={10,20,30,40,50,60}; //static array
    int n=6;                  //array size
      int pos=2;            //position to delete
      
    for(int i = pos ; i < n - 1 ; i++)  //loop for deletion
    {
        x[i]=x[i+1];          //shift element to left
    }
       n--;
    cout<<"Array after deletion is:";  //print array after deletion
    for(int i = 0 ; i < n ; i++)
    {
    cout<< x [i] << " ";    //print array elements }
    cout<<endl;
    return 0; 
}