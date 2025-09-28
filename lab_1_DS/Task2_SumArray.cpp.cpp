
#include<iostream>     //use for input output library
using namespace std;    //standers library
int main()          //main function
{
    int x[6];     //static array
    for ( int i = 0 ; i < 6 ; i++)         //loop for array
    {
        x[i] = 2 * i;                  //assign value
        cout<<"static array elements :";    //print array elements
        for(int i= 0 ; i < 6 ; i++)      //loop for print array
        cout<< x[i] <<" ";        //print array elements
    } 
    cout<<endl; //new line
    return 0;     //means program end
}

