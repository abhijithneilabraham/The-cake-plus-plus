#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<process.h>
char pass[10]="DIVERGENT";
char word[10];
void main()
{
clrscr();

for(int x=20,y=6;y<17;y++)
{gotoxy(x,y);
cout<<"л";
}
for( x=20,y=6;x<61;x++)
{gotoxy(x,y);
cout<<"л";
}
for( x=61,y=6;y<17;y++)
{gotoxy(x,y);
cout<<"л";
}
for( x=61,y=17;x>19;x--)
{gotoxy(x,y);
cout<<"л";
}


gotoxy(30,10);
cout<<"ENTER THE PASSWORD";
gotoxy(30,12);
for(int i=0;i<9;i++)
{
word[i]=getch();
gotoxy(30+i,12);
cout<<"л";
}
word[i]='\0';
if(strcmpi(pass,word)==0)
{
cout<<" "<<"access granted";

delay(700);
getch();

clrscr();


for( i=1;i<5;i++)
{textcolor(i);
 clrscr();

cout<<" \n \n\n\n\t\t\n\t\b   		     лл  лл лл ллллл   лл  лл                                      ";
cout<<"            \n\t\b   		     лл  лл лл лл      лл  лл         ";
cout<<"            \n\t\b   		     лллллл лл лл лллл лллллл                                                 ";
cout<<"            \n\t\b   		     лл  лл лл лл  л л лл  лл          ";
cout<<"            \n\t\b   		     лл  лл лл ллллл л лл  лл                                         ";
cout<<"         \n\n\t \t\n\t\t\b  	       лл     ллл   лл   лл    ";
cout<<"            \n\t\b          	       лл   лл   лл лл   лл                            ";
cout<<"            \n\t\b          	       лл   лл   лл лл л лл    ";
cout<<"            \n\t\b          	       лл   лл   лл лл л лл                             ";
cout<<"            \n\t\b                        ллллл  ллл   ллллллл           ";
delay(1000);
}
gotoxy(12,25);
cout<<"PRESS ANY KEY TO CONTINUE";

getch();

clrscr();
gotoxy(30,10);
cout<<"LOADING \n\t\t\t";
for(i=0;i<19;i++)
{delay(300);
cout<<"л";
}


}

else

  cout<<" "<<"access denied";




  getch();
  }