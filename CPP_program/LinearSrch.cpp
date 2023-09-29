#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int arr[50],n,m,index,f,i;
cout<<"Enter the size of array : ";
cin>>n;
cout<<"Enter array elements : ";
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}
cout<<"Entered array is : ";
for (int i = 0; i < n; i++)
{
   cout<<arr[i]<<" ";
}

cout<<"Enter a element to search : ";
cin>>m;
f=0;
for ( i = 0; i < n; i++)
{
    if(arr[i]==m){
        index=i;
        f=1;
        break;
    }
}

if(f==1){
 cout<<"Number ";
 cout<<m;
 cout<<" found at index: "<<index;
}else{
    cout<<m <<" not found at any index";
}
    
return 0;

}