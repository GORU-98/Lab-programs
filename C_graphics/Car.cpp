#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gm ,gd = DETECT;
   
    
    
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file

    initgraph(&gd, &gm, data);
   
    cleardevice();
    line(200, 150, 350, 150);
    line(140, 200, 200, 150);
    line(140, 330, 140, 200);
    getch();
    closegraph();
return 0;

}