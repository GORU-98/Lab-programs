#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gm,  gd = DETECT;
    // int midx, midy;
    
    
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file

    initgraph(&gd, &gm, data);
    // x = getmaxx(); // to get the co-ordinates i.e. x & y
    // y = getmaxy();
    cleardevice();
    // line(200, 150, 350, 150);
    // line(140, 200, 200, 150);

setcolor(YELLOW);
    rectangle(100,50,600,300);
        // rectangle(150,100,300,200);
                rectangle(150,100,550,200);
                
    line(100,60,600,60);
    line(100,70,600,70);
    line(100,80,600,80);
    line(100,90,600,90);
    
    line(100,210,600,210);
    line(100,220,600,220);
    line(100,230,600,230);
    line(100,240,600,240);
    line(100,250,600,250);
    // line(100,260,600,260);

    line(100,100,150,100);
    line(100,110,150,110);
    line(100,120,150,120);
    line(100,130,150,130);
    line(100,140,150,140);
    line(100,150,150,150);
    line(100,160,150,160);
    line(100,170,150,170);
    line(100,180,150,180);
    line(100,190,150,190);
    line(100,200,150,200);

    line(550,100,600,100);
    line(550,110,600,110);
    line(550,120,600,120);
    line(550,130,600,130);
    line(550,140,600,140);
    line(550,150,600,150);
    line(550,160,600,160);
    line(550,170,600,170);
    line(550,180,600,180);
    line(550,190,600,190);
    line(550,200,600,200);


    // floodfill(260, 180, 15);
    setcolor(RED);
    circle(200, 300, 50);
                // floodfill(150,200,12);

        circle(500, 300, 50);
        
          
    // line(250, 200, 140, 200);
    // line(200, 150, 250, 200);
    
    // floodfill(196, 180, 15);
    // setfillstyle(1, 2);
    // line(350, 150, 400, 200);
    // floodfill(210, 180, 15);
    // line(400, 200, 400, 330);
    // line(140, 330, 400, 330);
    // line(250, 200, 250, 330);
    // line(250, 200, 400, 200); // Hut

    // setfillstyle(5, 7);
    // line(170, 260, 170, 330);
    // line(170, 260, 210, 260);
    // setfillstyle(10, 9);
    // floodfill(180, 250, 15);
    // line(210, 260, 210, 330);
    // setfillstyle(9, 9);
    // floodfill(210, 250, 15);
    // line(290, 110, 290, 150);
    // line(310, 110, 310, 150);
    // ellipse(300, 110, 0, 360, 10, 3); // Chemney

    // setfillstyle(6, 8);
    // floodfill(300, 120, 15);
    // line(300, 250, 350, 250);
    // line(300, 280, 350, 280);
    // line(300, 250, 350, 280);
    // line(300, 280, 300, 250);
    // line(350, 280, 350, 250);

    // setfillstyle(9, 9);
    // floodfill(252, 300, 15);
    // setfillstyle(8, 9);
    // floodfill(342, 270, 15);

    // setcolor(3);
    // /* draw arc */
    // arc(30, 300, stangle, endangle, radius);

    // setcolor(7);
    // line(5, 330, 600, 330);
    // for (i = 0; i < 650; i = i + 10)
    // {
    //     setcolor(4);
    //     settextstyle(7, 0, 5);

    //     char stringData1[] = "Home Sweet Home";

    //     outtextxy(0 + i, 390, stringData1);
    //     delay(100);
    //     setcolor(0);
    //     settextstyle(7, 0, 5);

    //     outtextxy(0 + i, 390, stringData1);
    // }
    getch();
    closegraph();

    return 0;
}