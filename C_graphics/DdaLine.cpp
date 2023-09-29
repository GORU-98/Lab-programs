#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>

int main(){

       int gm ,gd = DETECT;
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
    initgraph(&gd, &gm, data);
    cleardevice();
// line(250,100,350,100);
int X1,X0,Y1,Y0;
X1=630,X0=200,Y1=260,Y0=200;

    int dx = X1 - X0;
    int dy = Y1 - Y0;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
 
    // calculate increment in x & y for each steps
    float Xinc = dx / (float)steps;
    float Yinc = dy / (float)steps;
 
    // Put pixel for each step
    float X = X0;
    float Y = Y0;
    for (int i = 0; i <= steps; i++) {
        putpixel(X,Y,YELLOW); // put pixel at (X,Y)
        X += Xinc; // increment in x at each step
        Y += Yinc; // increment in y at each step
        delay(1);
                 
    }
    getch();
    closegraph();
    return 0;
}