#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <process.h>

void main()
{
	char cursor;
	clrscr();
	int x = 22, y = 4;
	do
	{


		if (cursor == 's' || cursor == 'S')
			if (y != 8)
				y++;
			else
				y -= 4;
		else if (cursor == 'w' || cursor == 'W')
			if (y != 4)
				y--;
			else
				y += 4;
		else if (cursor == 'z' || cursor == 'Z')
		{
			clrscr();
			cout << "Exiting.";
			delay(1000);
			exit(0);
		}
		else if (cursor == char(13))
		{
			if (y == 4)
			{
				cout << "\n\n\n\n\n\n\n Book a room";
				delay(1500);
				exit(0);
			}

			else if (y == 5)
			{
				cout << "\n\n\n\n\n\n\n Customer record";
				delay(1500);
				exit(0);
			}

			else if (y == 6)
			{
				cout << "\n\n\n\n\n\n\n Room allotment";
				delay(1500);
				exit(0);
			}

			else if (y == 7)
			{
				cout << "\n\n\n\n\n\n\n Edit record";
				delay(1500);
				exit(0);
			}

		}
		clrscr();
		cout<<"*************"<<endl;
		cout<<"MAIN MENU"<<endl;
		cout<<"*************"<<endl;
		cout<<"1.Book A Room"<<endl;
		cout<<"2.Customer Record"<<endl;
		cout<<"3.Rooms Allotted"<<endl;
		cout<<"4.Edit Record"<<endl;
		cout<<"5.Exit"<<endl;
		gotoxy (x, y); cout << "<<";
		cursor = getch();
	} while (cursor != 'z');
	getch();
}

