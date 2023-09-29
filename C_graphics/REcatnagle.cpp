#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gm ,gd = DETECT;
   char data[] = "";
   initgraph(&gd, &gm, data);
   cleardevice();

    int x0,y0,x1,y1;
    x0=600;
    y0=100;
    x1=400;
    y1=300;

    if(x0>640||x1>640||y0>480||y1>480 ){
        printf("Rectangle cannot be drawn. Choose another point for the rectangle...");


    }else if(x0==x1 || y0==y1){
        printf("Rectangle points cannot be same. Choose another point for the rectangle...");

    }else{
    rectangle(x0,y0,x1,y1);
  line(x0,y0,x1,y1);
    }




getch();
closegraph();
return 0;
}