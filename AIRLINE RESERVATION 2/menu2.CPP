#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int ch1,ch2;
start:
cout<<"\nINDIAN RAILWAYS";
cout<<"\n***************";
cout<<"\n1.booking\n2.fare details\n3.help\n4.about\n5.exit" ;
cout<<"\nenter ur choice:";
cin>>ch1;
clrscr();
switch(ch1)
{
case 1: submenu:
	cout<<"\n1.booking\n2.modify\n3.cancellation\n4.back";
	cout<<"\nenter ur choice:"  ;
	cin>>ch2;
	switch(ch2)
	{
	case 1:break;
	case 2:break;
	case 3:break;
	case 4:clrscr();
	       goto start;
	       break;
	}
	break;
case 2: break;
case 3: break;
case 4: break;
case 5: cout<<"exiting...";
	getch();
	exit(0);
}
getch();
}