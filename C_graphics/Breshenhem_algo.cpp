#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gm ,gd = DETECT;
   char data[] = "C:\\MinGW\\lib\\libbgi.a";
   initgraph(&gd, &gm, data);
   cleardevice();

int x1,x2,y1,y2,i,p,dx,dy;
// printf("Enter the x1 and y1 value : ");
// scanf("%d%d",&x1,&y1);
// printf("Enter the x2 and y2 value : ");
// scanf("%d%d",&x2,&y2);
 x1=2;x2=600;y1=2;y2=400;
 dx=x2-x1;
 dy=y2-y1;
 p=2*dy-dx;
 putpixel(x1,y1,6);
    while(i<dx){
 putpixel(x1,y1,6);
   x1++;
 if (p<0)
 {
   p=p + 2*dy;
 }else{

    y1++;
    p=p +2*dy-2*dx;
 }
 delay(5);
 i++;
 

    }
    getch();
    closegraph();
    return 0;
}