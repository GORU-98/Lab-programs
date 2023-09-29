#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n,i,max_sum,curr_sum,arr[50];

    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter elements : ";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    // int arr[10]={12,-45,34,-23,-34,56,74,88,34,2};
    max_sum=curr_sum=0;

    // cout<<arr[2];
    for ( i = 0; i <n; i++)
    {
        curr_sum=curr_sum+arr[i];
        if (curr_sum<0){
            curr_sum=0;
        }
        if (max_sum<curr_sum)
            {
            max_sum=curr_sum;
                
            }
        }
        cout<<max_sum;
            return max_sum;
    }
    // getch();
    
    // return 0;
    
