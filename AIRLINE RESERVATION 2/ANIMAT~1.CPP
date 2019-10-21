#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>


void main()
{

int x,y,i;
	int g=DETECT,d;
       initgraph(&g,&d,"\tc\bgi");
       cleardevice();
       x=getmaxx()/2;
       y=getmaxy()/2;
       settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
       setbkcolor(rand());
       setcolor(4);
       outtextxy(30,100,"Press");
       outtextxy(30,130,"any");
       outtextxy(30,160,"key");
       outtextxy(30,190, "to");
       outtextxy(30,220,"Quit");
       while (!kbhit())
       {
       setcolor(rand());
       for (int i=0;i<50;i++)
       circle(x,y,i );
       setcolor(rand());
       for (int j=70;j<120;j++)
       circle(x,y,j);
       setcolor(rand());
       for (int k=140;k<190;k++)
       circle(x,y,k);
       setcolor(rand());
       for (int l=210;l<230;l++)
       circle(x,y,l);
       delay(200);
       }
       getch();
       closegraph();
       }