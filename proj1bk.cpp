#include<graphics.h>

#include<stdlib.h>

#include<stdio.h>

#include<conio.h>

#include<dos.h>

int main()

{

	int i;

	int gdriver = DETECT, gmode, errorcode;

	int xmax, ymax;

	initgraph(&gdriver, &gmode, "c://tc//bgi");



	for(i=0;i<=640;i++)

	{

		cleardevice();



   		// track

   		setcolor(7);

   		line(0,450,640,450);

   		line(0,475,640,475);

   		line(0,480,640,480);



   		// back box

   		setcolor(11);

   		rectangle(30+i,340,180+i,350);

   		rectangle(40+i,350,170+i,425);



   		// back wheels

   		setcolor(9);

   		circle(70+i,437,12);

   		circle(140+i,437,12);



   		// back incircle

   		setcolor(10);

   		circle(70+i,437,8);

   		circle(140+i,437,8);

   		rectangle(70+i,435,140+i,439);



   		// back windows

   		setcolor(14);

   		rectangle(55+i,365,155+i,400);

   		line(83+i,365,83+i,400);

   		line(122+i,365,122+i,400);



   		// joint

   		setcolor(13);

   		rectangle(170+i,400,210+i,390);



   		// engine

   		setcolor(10);

   		rectangle(200+i,320,260+i,330);

   		rectangle(210+i,330,250+i,400);

   		rectangle(250+i,340,345+i,425);

   		rectangle(250+i,340,330+i,410);



   		// front wheels

   		setcolor(9);

   		circle(225+i,425,25);

   		circle(320+i,437,12);

   		circle(280+i,437,12);



   		// front small incircle

   		setcolor(11);

   		circle(320+i,437,8);

   		circle(280+i,437,8);

   		rectangle(320+i,435,280+i,439);



   		// front big incircle

   		setcolor(13);

   		circle(225+i,425,15);



   		// front windows

   		setcolor(11);

   		rectangle(220+i,335,240+i,365);



   		// fire

   		setcolor(9);

   		rectangle(300+i,300,330+i,340);

   		rectangle(290+i,290,340+i,300);



   		// tracker

   		setcolor(13);

   		line(332+i,425,332+i,450);

   		line(345+i,425,355+i,450);



   		// light

   		setcolor(12);

   		rectangle(345+i,360,355+i,380);



   		// hills

   		setcolor(7);

   		line(0,200,50,150);

   		line(50,150,150,200);

   		line(150,200,300,100);

   		line(300,100,450,175);

   		line(450,175,640,125);



   		// sun

   		setcolor(14);

   		circle(475,75,25);



   		// text

   		settextstyle(3,0,2);

   		setcolor(14);

   		outtextxy(200,448,"CREATED BY Nilabh Anand");



   		delay(30);

   }

   getch();

   closegraph();
   
   return 0;

}
