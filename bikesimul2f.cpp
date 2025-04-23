#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int a = DETECT, b, x, i, j;
    initgraph(&a, &b, "c:\\turboc3\\bgi");

    for (x = 170, i = 0; !kbhit(); x++, i--) {
        // Set color to blue for the body
        setcolor(BLUE);
        setfillstyle(SOLID_FILL, BLUE);
        // Draw body
        arc(x, 200, 270, 90, 20);
        line(x, 220, x - 60, 220);
        line(x, 180, x - 60, 200);
        line(x - 60, 220, x - 60, 200);
        rectangle(x - 110, 200, x - 60, 220);
        line(x - 110, 220, x - 60, 250);
        line(x, 220, x - 60, 250);
        line(x - 60, 220, x - 60, 250);
        circle(x - 140, 250, 5);
        circle(x - 140, 250, 30);
        line(x - 60, 250, x - 140, 250);
        line(x - 110, 220, x - 140, 250);
        line(x, 200, x + 50, 250);
        line(x, 220, x + 50, 250);
        circle(x + 50, 250, 5);
        circle(x + 50, 250, 30);
        circle(x, 200, 5);
        arc(x, 200, 315, 45, 30);
        line(x, 200, x + 21, 179);
        line(x, 200, x - 25, 175);
        circle(x - 25, 175, 5);
        line(x - 25, 175, x - 60, 160);
        line(x - 60, 160, x - 80, 200);
        circle(x - 60, 145, 15);
        line(x - 80, 200, x - 50, 215);
        line(x - 50, 215, x - 60, 250);
        line(0, 280, 639, 280);

        // Set color to yellow for the wheels
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        // Draw wheels
        circle(x - 140, 250, 5);
        floodfill(x - 140, 250, YELLOW);
        circle(x - 140, 250, 30);
        floodfill(x - 140, 250, YELLOW);
        circle(x + 50, 250, 5);
        floodfill(x + 50, 250, YELLOW);
        circle(x + 50, 250, 30);
        floodfill(x + 50, 250, YELLOW);

        // Draw sun
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        circle(320, 50, 30);
        floodfill(320, 50, YELLOW);

        // Draw other details
        for (j = 0; j < 30; j++) {
            arc(x - 140, 250, i, i + 1, j);
            arc(x - 140, 250, i + 90, i + 91, j);
            arc(x - 140, 250, i + 180, i + 181, j);
            arc(x - 140, 250, i + 270, i + 271, j);
            arc(x + 50, 250, i, i + 1, j);
            arc(x + 50, 250, i + 90, i + 91, j);
            arc(x + 50, 250, i + 180, i + 181, j);
            arc(x + 50, 250, i + 270, i + 271, j);
        }

        delay(20);
        cleardevice();

        if (x == 558) {
            x = 170;
            i = 0;
        }
        settextstyle(3,0,2);

   		setcolor(GREEN);

   		outtextxy(200,448,"CREATED BY NILABH ANAND");


    }

    closegraph();
    return 0;
}
