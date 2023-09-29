#include<iostream>
#include<conio.h>
using namespace std;





int partition(int arr[],int start,int end){
   int pivot=arr[start];
int count = 0;
for (int i = start; i <end; i++)
{
    if(arr[i]<pivot){
        count++;
    }
}

int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

while (start<pivotIndex && end>pivotIndex)
{
   while (arr[start]<pivot)
   {
     start++;
   }
   while (arr[end]>pivot)
   {
     end--;
   }
   if(start<pivotIndex && end>pivotIndex){
    swap(arr[start++], arr[end--]);
   }
}
   return pivotIndex;

}
void function1(int arr[],int start,int end){

if(start>=end){
    return ;
}
int p=partition(arr,start,end);
function1(arr,start,p-1);
function1(arr,p+1,end);
}
int main() {

int arr[]={12,9,0,5,67,46,387,67,45};

// cout<<"Enter the size of array : ";
// cin>>n;
// cout<<"Enter the Elements : ";
// for ( i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }

// cout<<"Entered array is : ";

int start=0;
int end=8;
function1(arr,start,end-1);



for (int i = start; i < end-1; i++)
{
cout<<arr[i]<<" ";
    
}

// cout<<pivotIndex;
return 0;
}
