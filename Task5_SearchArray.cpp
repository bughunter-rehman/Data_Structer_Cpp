#include<iostream>
usimg namespace std;
intmain()
{
    int n;                //array size
    cout<<"enter array size";   //
    cin>>n; 
    int* y =new int[n];           //dynamic array
for (int i = 0; i < n; i++){     
    y[i] = 5 * (i +1);
}
cout<<"dynamic array";            //print dynamic array
for (int i = 0; i < n; i++)
{
    cout<<y[i]<<" ";          //print array elements
}
cout<<endl;
delete[] y;
return 0;
}