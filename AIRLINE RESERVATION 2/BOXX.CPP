#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{
clrscr();
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
setcolor(YELLOW);
setfillstyle(SOLID_FILL,WHITE);
rectangle(4,40,635,335);
floodfill(5, 41, YELLOW);
 //BOX(1,3,80,21,218);
 line(6,85,630,85);

 line(100,118,629,118);
 line(91,295,629,295);
 line(100,119,6,200);
 line(6,200,90,295);
 line(100,220,600,220);

 getch();
 }