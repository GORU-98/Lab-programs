#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gm, gd = DETECT;
    char data[] = "";
    initgraph(&gd, &gm, data);
    cleardevice();
    int x = 400;
    int y = 380;
    int x1 = 300;
    int y1 = 300;
    line(x, y, x1, y1);
    line(x, y, y1, x);
    line(x, y, y1, x);
    //    line(x,y,x,z);
    getch();
    closegraph();
    return 0;
}