#include<stdio.h>

int main()
{
    int arr[10],i;

    printf("Enter a number :");
for (i = 0; i < 10; i++)
{
    scanf("%d",&arr[i]);
}

printf("array is :");
for (i=0; i<10; i++)
{
    // scanf("%d",&a[i]);
 printf("%d", arr[i]);

}
if (!arr[0]==0 && scanf("%d",&arr[i]) )
{
   printf("the number is valid");
}else{
       printf("the number is Invalid");

}

   // scan f("%d",&a);
    // if(scanf("%d",&a) && a>100000000){
    //     printf("Entered number is a valid number");
    // }else{
    //     printf("invalid number");

    // }
    // scanf("%d",&a);
    //  if(scanf("%d",&a) && a[0]<1){
    //     printf("Entered number is a valid number");
    // }else{
    //     printf("invalid number");

    // }
        
    return 0;

}