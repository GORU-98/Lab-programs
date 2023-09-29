#include<iostream>
#include<conio.h>
using namespace std;

int main() {
int arr[10],i,n,temp;
cout<<"Enter the size of array : ";
cin>>n;
cout<<"Enter the Elements : ";         

for ( i = 0; i < n; i++)
{
    cin>>arr[i];
}

cout<<"Entered array is : ";

for ( i = 0; i < n; i++)
{
cout<<arr[i]<<" ";
    
}

for ( i = 0; i < n-1; i++)
{
    for (int j = 0; j < n-i-1; j++)
    {
      if(arr[j]>arr[j+1]){
         temp=arr[j] ;
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        
      }
    }
    
}


cout<<"Sorted array is : ";
for ( i = 0; i < n; i++)
{
cout<<arr[i]<<" ";
    
}
// cout<<arr[i];



    return 0;
}