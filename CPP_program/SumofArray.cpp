#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

 int arr1[10],n;
 int sum;
 sum = 0;
cout<<"Enter the size of array1 : ";
cin>>n;
cout<<"Enter array1 elements : ";
for (int i = 0; i < n; i++)
{
   cin>>arr1[i];
}
for (int i = 0; i < n; i++)
{
    sum = sum + arr1[i];
}

cout<<"Sum of array elements is : ";
cout<<sum;
return 0;
} 
// cout<<"Enter the size of array2";
// cin>>m;

// array 1 input


// array 2 input
// cout<<"Enter array2 elements : ";
// for (int i = 0; i < m; i++)
// {
//    cin>>arr2[i];
// }


