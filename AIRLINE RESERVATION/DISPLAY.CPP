#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<dos.h>
class booking
{
char firstname[20],lastname[20],dest[20],dept[20],email[20],food[10];
char flightno1[10];
long int phone;
int ticketno,seat;

public:
	struct time
	{
	int h,m,s;
	}tb;
	long int price;
	char* flightno(){return flightno1;}
	char* getdept(){return dept;}
	char* getdest(){return dest;}
	void dispbooking();

}B;
void main()
{
clrscr();
fstream f;
f.open("BOOKING",ios::in|ios::binary);
while(f.read((char*)&B,sizeof(B)))
{
B.dispbooking();
delay(5000);
cout<<"\n";
}
f.close();
getch();
}
 void booking::dispbooking()
 {
  cout<<" PASSPORTNO          :"<<ticketno;
 cout<<"\nPASSENGER'S FIRSTNAME:"<<firstname;
 cout<<"\nPASSENGER'S LASTNAME :"<<lastname;
 cout<<"\nPLACE OF DEPARTURE   :"<<dept;
 cout<<"\nDESTINATION          :"<<dest;
 cout<<"\nPHONE NUMBER         :"<<phone;
 cout<<"\nEMAIL                :"<<email;
 cout<<"\nFOOD TYPE            :"<<food;
 cout<<"\nSEATNO               :"<<seat;
 cout<<"\nFLIGHTNO             :"<<flightno1;
 cout<<"\nTIME                 :"<<tb.h<<":"<<tb.m<<":"<<tb.s;
 cout<<"\nPRICE                :"<<price;
 }

