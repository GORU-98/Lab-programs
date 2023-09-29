#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[50],i,n;
    cout<<"Enter the size of array : ";                
    cin>>n;
    cout<<"Enter the elements of array : ";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
   int max = arr[0];
   int min = arr[0];
    for ( i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
          max=arr[i];
        }else if(arr[i]<min){
            min=arr[i];

        }
        
    }
    cout<<"Maximum number is : ";
    cout<<max;
    cout<<"\nMinimum number is : ";
    cout<<min;
    
return 0;
}