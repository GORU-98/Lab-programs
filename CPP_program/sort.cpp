#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num[]={99,45,67,4,3,77,21};
    cout<<"array is : ";
    for(int i=0;i<7;i++){
        cout<<num[i]<<" ";
    }

    for (int  i = 1; i < 7; i++)
    {
        int current =num[i];
        int prev=i-1;
        while(num[prev]>current && prev>=0){
            num[prev+1]=num[prev];
            prev--;
        }
    num[prev+1]=current;
    }



cout<<"sorted array is : ";
    for (int i = 0; i < 7; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}