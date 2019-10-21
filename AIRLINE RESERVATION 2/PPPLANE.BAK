#include<dos.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
void main()
 {

   int d=DETECT,m;
   initgraph(&d,&m,"e:\tcc\bgi");
   setbkcolor(0);

   for(int i=10;i<600;i=i+10)
   {
   putpixel(random(640),random(600),random(200));
   settextstyle(2,HORIZ_DIR,5);
   outtextxy(120+i,83,"LOADING>>>");
   setcolor(rand());
   line(90+i,80,250+i,80);
   line(90+i,100,250+i,100);
   arc(250+i,90,270,90,10);
   line(90+i,80,60+i,45);
   line(90+i,100,65+i,135);
   line(60+i,45,40+i,45);
   line(65+i,135,45+i,135);
   line(40+i,45,70+i,90);
   line(45+i,135,70+i,90);
   line(140+i,80,110+i,20);
   line(140+i,100,110+i,160);
   line(110+i,160,130+i,160);
   line(110+i,20,130+i,20);
   line(130+i,20,180+i,80);
   line(130+i,160,180+i,100);
   delay(150);
   cleardevice();
   }

   for(i=0;i<600;i=i+10)
   {
    putpixel(random(640),random(600),random(200));
   outtextxy(450-i,321,"<<<LOADING");
   setcolor(rand());
   line(550-i,320,390-i,320);
   line(550-i,340,390-i,340);
   arc(390-i,330,90,270,10);
   line(550-i,320,580-i,285);
   line(550-i,340,575-i,375);
   line(580-i,285,600-i,285);
   line(575-i,375,595-i,375);
   line(600-i,285,570-i,330);
   line(595-i,375,570-i,330);
   line(500-i,320,530-i,250);
   line(500-i,340,530-i,410);
   line(530-i,250,510-i,250);
   line(530-i,410,510-i,410);
   line(510-i,250,460-i,320);
   line(510-i,410,460-i,340);
   delay(150);
   cleardevice();
   }
   getch();
 }
