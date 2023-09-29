#include<stdio.h>

int main(){
    
    char a[100];
    printf("Enter a string : ");
    // scanf("%s",a);
    if( scanf("%s",a)){
        printf("Entered String is a valid string");
      
    }else{
        printf("Entered String is not a valid string");

    }
    // getch();
return 0;
}