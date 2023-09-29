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

    int xc,yc, x,y,r,p,a;
xc=300,yc=250,r=150;
x=0;
y=r;
p=3-2*r;
while(x<y){
    putpixel(xc+x,yc+y,8);
    putpixel(xc+x,yc-y,8);
    putpixel(xc-x,yc+y,9);
    putpixel(xc-x,yc-y,9);
    putpixel(xc+y,yc+x,12);
    putpixel(xc+y,yc-x,12);
    putpixel(xc-y,yc+x,3);
    putpixel(xc-y,yc-x,3);

    if(p<0){
        p=p+4*x+6;
    }else{
        y=y-1;
        p=p+4*(x-y)+10;

    }
    x++;
}

// printf("enter the value of a");
// scanf("%d",&a);
// circle();

getch();
closegraph();
return 0;
}
