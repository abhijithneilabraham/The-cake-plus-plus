#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<iomanip.h>
#include<string.h>
#include<fstream.h>
#include<stdlib.h>
#include<stdio.h>
class flightdom
{
	char fno[10];
	char dept[20],dest[20];

	public:
	struct time
	{
	int h,m,s;
	}t;
	int seat[10];
	char* getfno(){return fno;}
	char* getdept(){return dept;}
	char* getdest(){return dest;}
	time  gettime(){return t;}

	void dispflightd();

	void disptimed();

	void getflight();

	void dispflight();


}D;
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
	int getticketno(){return ticketno;}
	long int price;
	time gettime(){return tb;}
	long int getprice(){return price;}
	char* flightno(){return flightno1;}
	char* getdept(){return dept;}
	char* getdest(){return dest;}
	void getbooking();
	void dispbooking();
	void dispbookingdd();
}B;
class dfirst
{
long int adultf,kidf,todf;
public:
long int getadultf(){return adultf;}
long int getkidf(){return kidf;}
long int gettodf(){return todf;}
void toddler();
void children();
void adult();
void disp();
}PF;
class dbusiness
{
long int adultb,kidb,todb;
public:
long int getadultb(){return adultb;}
long int getkidb(){return kidb;}
long int gettodb(){return todb;}
void toddler();
void children();
void adult();
void disp();
}PB;
class deconomic
{
long int adulte,kide,tode;
public:
long int getadulte(){return adulte;}
long int getkide(){return kide;}
long int gettode(){return tode;}
void toddler();
void children();
void adult();
void disp();
}PE;
struct dob
{
int d,m,y;
}date;
struct time1
{
 int h,m,s;
}ts;


void main()
{

clrscr();
void mainmenu();
mainmenu();
getch();
}
void mainmenu()
{
char cursor;
clrscr();
int x = 22, y = 4;
clrscr();
void booking();
void search();
void modify();
void cancellation();
void pricedetails();
void display();
void help();
int ch1,chinvalid;
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
			exit:
			clrscr();
			cout<<"\nTHANK YOU FOR CHOOSING US TO TRAVEL";
			cout<<"\nEXITING.....";
			getch();
			exit(0);
		}
		else if (cursor == char(13))
		{
			if (y == 4)
			{
				clrscr();
				booking();
				exit(0);
			}

			else if (y == 5)
			{
				clrscr();
				search();
				exit(0);
			}

			else if (y == 6)
			{
				clrscr();
				modify();
				exit(0);
			}

			else if (y == 7)
			{
				clrscr();
				cancellation();
				exit(0);
			}
			else if (y == 8)
			{
				clrscr();
				pricedetails();
				exit(0);
			}
			else if (y == 9)
			{
				clrscr();
				display();
				exit(0);
			}

			else if (y == 10)
			{
				clrscr();
				help();
				exit(0);
			}
		}

		clrscr();
		cout<<setw(10)<<"\n\n\n\n\nMAIN MENU";
		cout<<setw(10)<<"\n*********";
		cout<<"\n\n1.RESERVATION";
		cout<<"\n2.SEARCH";
		cout<<"\n3.MODIFY";
		cout<<"\n4.CANCELLATION";
		cout<<"\n5.PRICE DETAILS";
		cout<<"\n6.PASEENGER RECORDS";
		cout<<"\n7.HELP";
		cout<<"\n8.EXIT";
		gotoxy (x, y); cout << "<<";
		cursor = getch();
	} while (cursor != 'z');

/*cout<<setw(10)<<"\n\n\n\n\nMAIN MENU";
cout<<setw(10)<<"\n*********";
cout<<"\n\n1.BOOKING";
cout<<"\n2.SEARCH";
cout<<"\n3.MODIFY";
cout<<"\n4.CANCELLATION";
cout<<"\n5.PRICE DETAILS";
cout<<"\n6.DISPLAY";
cout<<"\n7.HELP";
cout<<"\n8.EXIT";
cout<<"\nENTER YOUR CHOICE:";
cin>>ch1;
clrscr();
switch(ch1)
{
case 1:clrscr();
       booking();
       break;
case 2:clrscr();
       search();
       break;
case 3:clrscr();
       modify();
       break;
case 4:clrscr();
       cancellation();
       break;
case 5:clrscr();
       pricedetails();
       break;

case 6:clrscr();
       display();
       break;
case 7:clrscr();
       //help();
       break;
case 8:exit:
       clrscr();
       cout<<"\nTHANK YOU FOR CHOOSING US TO TRAVEL";
       cout<<"\nEXITING.....";
       getch();
       exit(0);
       break;
default:cout<<"\nINVALID OPERATION";
	cout<<"\nPRESS M/m TO GO BACK TO MAIN MENU OR PRESS ANY KEY TO EXIT";
	cin>>chinvalid;
	if(chinvalid=='M'||chinvalid=='m')
	  mainmenu();
	else
	  goto exit;
}//switch*/
getch();
}

void booking()
{
clrscr();
void returnbooking();
char ch2;
long int price1;
char enter;
int found=0,chclass,age,n;

fstream b,d1,bdisplay;

d1.open("DOMESTIC",ios::binary|ios::in);
b.open("BOOKING",ios::in|ios::out|ios::binary|ios::app);
bdisplay.open("BOOKINGDISPLAY",ios::in|ios::out|ios::binary);
if(!d1)
 cout<<"CANNOT OPEN FILE";
if(!b)
 cout<<"CANNOT OPEN FILE";
else
 {
 cout<<"\nENTER THE NO OF TICKETS YOU WANT TO BOOK:";
  cin>>n;

  for(int i=0;i<n;i++)
  {
  clrscr();
  B.getbooking();

  do
  {
  if(strcmpi(D.getdept(),B.getdept())==0 && strcmpi(D.getdest(),B.getdest())==0)
    {

      strcpy(B.flightno(),D.getfno());
      B.tb.h=D.t.h;
      B.tb.m=D.t.m;
      B.tb.s=D.t.s;
      found=1;
      //b.write((char*)&B,sizeof(B));

      break;

    }
    }while(d1.read((char*)&D,sizeof(D)));

 if(!found)
 {
    cout<<"NO FLIGHT IS AVAILABLE IN THIS ROUTE";
    cout<<"\nPRESS A/a to rebook or B/b to exit:";
    cin>>enter;
       if(enter=='A'|| enter=='a')
	 B.getbooking();
       else if(enter=='B'|| enter=='b')
	 {exit(0);
	  getch();
	 }
       }

   cout<<"\nENTER THE PREFERED CLASS (1.FIRSTCLASS/2.BUSINNESS CLASS/3.ECONOMIC CLASS)";
   cin>>chclass;

   switch(chclass)
   {
    case 1:
	   fstream ff;
	   ff.open("dfirstclass",ios::binary|ios::in);
	   if(!ff)
	   cout<<"CANNOT OPEN FILE";
	   else
	   {
		cout<<"\nENTER THE AGE OF THE PASSENGER:";
		cin>>age;
			if(age<=5)
			{
			ff.read((char*)&PF,sizeof(PF));
			price1=PF.gettodf();
			B.price=price1;
			b.write((char*)&B,sizeof(B));
			bdisplay.write((char*)&B,sizeof(B));
			}
			else if(age<=14)
			{
			ff.read((char*)&PF,sizeof(PF));
			price1=PF.getkidf();
			B.price=price1;
			b.write((char*)&B,sizeof(B));
			bdisplay.write((char*)&B,sizeof(B));
			}
			else
			{
			ff.read((char*)&PF,sizeof(PF));
			price1=PF.getadultf();
			B.price=price1;
			b.write((char*)&B,sizeof(B));
			bdisplay.write((char*)&B,sizeof(B));
			}


	   }

	   break;
    case 2:     fstream fb;
		fb.open("dbusinessclass",ios::binary|ios::in);
		if(!fb)
		cout<<"CANNOT OPEN FILE";
		else
		{

			cout<<"\nENTER THE AGE OF THE PASSENGER:";
			cin>>age;
			if(age<=5)
			{
			fb.read((char*)&PB,sizeof(PB));
			price1=PB.gettodb();
			B.price=price1;
			b.write((char*)&B,sizeof(B));
			bdisplay.write((char*)&B,sizeof(B));
			}
			else if(age<=14)
			{
			fb.read((char*)&PB,sizeof(PB));
			price1=PB.getkidb();
			B.price=price1;
			b.write((char*)&B,sizeof(B));
			bdisplay.write((char*)&B,sizeof(B));
			}
			else
			{
			fb.read((char*)&PB,sizeof(PB));
			price1=PB.getadultb();
			B.price=price1;
			b.write((char*)&B,sizeof(B));
			bdisplay.write((char*)&B,sizeof(B));
			}
		}

		break;

    case 3: fstream fe;
	    fe.open("deconomicclass",ios::binary|ios::in);
	    if(!fe)
	    cout<<"CANNOT OPEN FILE";
	    else
	    {
		cout<<"\nENTER THE AGE OF THE PASSENGER:";
		cin>>age;
		if(age<=5)
		{
		fe.read((char*)&PE,sizeof(PE));
		  price1=PE.gettode();
		  B.price=price1;
		  b.write((char*)&B,sizeof(B));
		  bdisplay.write((char*)&B,sizeof(B));
		}
		else if(age<=14)
		{
		fe.read((char*)&PE,sizeof(PE));
		  price1=PE.getkide();
		  B.price=price1;
		  b.write((char*)&B,sizeof(B));
		  bdisplay.write((char*)&B,sizeof(B));
		}
		else
		{
		fe.read((char*)&PE,sizeof(PE));
		  price1=PE.getadulte();
		  B.price=price1;
		  b.write((char*)&B,sizeof(B));
		  bdisplay.write((char*)&B,sizeof(B));
		}
	    }

		break;

    default: cout<<"\nINVALID OPERATION";


    }//switch





}//for

 }//else
 d1.close();
 b.close();
 bdisplay.close();
 returnbooking();
 getch();
}


void returnbooking()
{
int ch2;
cout<<"\nPRESS 1 TO RETURN TO MAIN MENU 2.TO DISPLAY YOUR TICKET 3.BOOK MORE";
cin>>ch2;
switch(ch2)
{
 case 1:mainmenu();
	break;
 case 2:clrscr();
	fstream bdisplay;
	bdisplay.open("BOOKINGDISPLAY",ios::in|ios::binary|ios::out);
	if(!bdisplay)
	  cout<<"CANNOT OPEN FILE";
	clrscr();
	do
	{
	 B.dispbookingdd();
	 delay(3500);

	}while(bdisplay.read((char*)&B,sizeof(B)));

	cout<<"\nPRESS 1 TO RETURN TO MAIN MENU 2.BOOK MORE";
	cin>>ch2;
	switch(ch2)
	{
	    case 1:mainmenu();
		   break;

	    case 2:booking();
		   break;
	}
	break;
 case 3:booking();
	break;
 default:returnbooking();
}
}

void search()
{
fstream d;
void returnsearch();
d.open("DOMESTIC",ios::binary|ios::in|ios::out);
if(!d)
  cout<<"Cannot open file";
else
{
 int ch1,found=0;

 char fnos[10],depts[20],dests[20];

 cout<<"\n1.SEARCH BY FLIGHTNO";
 cout<<"\n2.SEARCH BY PLACE OF DEPARTURE";
 cout<<"\n3.SEARCH BY DESTINATION";
 cout<<"\n4.SEARCH BY TIME";
 cout<<"\nENTER YOUR CHOICE";
 cin>>ch1;
 switch(ch1)
 {
   case 1:cout<<"\nENTER FLIGHTNO:";
	  gets(fnos);
	  while(d.read((char*)&D,sizeof(D)))
	  {
	   if(strcmpi(fnos,D.getfno())==0)
	   {
	    D.dispflightd();
	    found=1;
	    break;
	    }
	   }
	  d.close();
	  if(!found)
	  cout<<"RECORD DOESNOT EXIST";
	  getch();
	  break;
    case 2:cout<<"\nENTER THE PLACE OF DEPARTURE";
	 gets(depts);
	 while(d.read((char*)&D,sizeof(D)))
	 {
	 if(strcmpi(depts,D.getdept())==0)
	  {
	    D.dispflightd();
	    found+=1;
	    }
	   }
	  d.close();
	  if(!found)
	  cout<<"RECORD DOESNOT EXIST";
	  getch();
	  break;

  case 3:cout<<"\nENTER THE DESTINATION";
	 gets(dests);
	 while(d.read((char*)&D,sizeof(D)))
	 {
	 if(strcmpi(dests,D.getdest())==0)
	  {
	    D.dispflightd();
	    found=1;
	    }
	   }
	  d.close();
	  if(!found)
	  cout<<"RECORD DOESNOT EXIST";
	  getch();
	  break;

  case 4 :clrscr();
	  cout<<"\nYOU HAVE FLIGHTS AVAILABLE AT THESE TIMES:\n";
	  while(d.read((char*)&D,sizeof(D)))
	  D.disptimed();
	  cout<<"\nEnter the time:";
	  cin>>ts.h>>ts.m;
	   while(d.read((char*)&D,sizeof(D)))
	   {
	    if(ts.h==D.t.h && ts.m==D.t.m)
	   {
	    D.dispflightd();
	    found=1;
	   }
	   }//while

	  d.close();
	  if(!found)
	  cout<<"RECORD DOESNOT EXIST";
	  break;



 }      getch();
	}//else
	returnsearch();
	getch();
	}
void returnsearch()
{
int ch2;
cout<<"\nPRESS 1 TO RETUR TO MAIN MENU 2.SEARCH MORE:";
cin>>ch2;
switch(ch2)
{
 case 1:mainmenu();
	break;
 case 2:search();
	break;
 default:returnsearch();
}
}
void modify()
{clrscr();
void returnmodify();
int ticket,foundm=0,pos;
long int price1;
char enter;
int found=0,chclass,age,n;

fstream d1;

d1.open("DOMESTIC",ios::binary|ios::in);
if(!d1)
 cout<<"CANNOT OPEN FILE";
fstream b;
b.open("BOOKING",ios::in|ios::binary|ios::out);
cout<<"\nENTER THE PASSPORT NUMBER TO BE MODIFIED:";
cin>>ticket;
while(b.read((char*)&B,sizeof(B)))
{
pos=b.tellg();
if(ticket==B.getticketno())
{

B.dispbookingdd();
cout<<"\nENTER THE NEW DETAILS:";
  B.getbooking();
  do
  {

  if(strcmpi(D.getdept(),B.getdept())==0 && strcmpi(D.getdest(),B.getdest())==0)
    {

      strcpy(B.flightno(),D.getfno());
      B.tb.h=D.t.h;
      B.tb.m=D.t.m;
      B.tb.s=D.t.s;
      found=1;
      //b.write((char*)&B,sizeof(B));

      break;

    }
    }while(d1.read((char*)&D,sizeof(D)));

 if(!found)
 {
    cout<<"NO FLIGHT IS AVAILABLE IN THIS ROUTE";
    cout<<"\nPRESS A/a to rebook or B/b to exit:";
    cin>>enter;
       if(enter=='A'|| enter=='a')
	 B.getbooking();
       else if(enter=='B'|| enter=='b')
	 {exit(0);
	  getch();
	 }
       }

   cout<<"\nENTER THE PREFERED CLASS (1.FIRSTCLASS/2.BUSINNESS CLASS/3.ECONOMIC CLASS)";
   cin>>chclass;

   switch(chclass)
   {
    case 1:
	   fstream ff;
	   ff.open("dfirstclass",ios::binary|ios::in);
	   if(!ff)
	   cout<<"CANNOT OPEN FILE";
	   else
	   {
		cout<<"\nENTER THE AGE OF THE PASSENGER:";
		cin>>age;
			if(age<=5)
			{
			ff.read((char*)&PF,sizeof(PF));
			PF.toddler();
			price1=PF.gettodf();
			B.price=price1;
			b.write((char*)&B,sizeof(B));
			}
			else if(age<=14)
			{
			ff.read((char*)&PF,sizeof(PF));
			PF.children();
			price1=PF.getkidf();
			B.price=price1;
			b.write((char*)&B,sizeof(B));
			}
			else
			{
			ff.read((char*)&PF,sizeof(PF));
			PF.adult();
			price1=PF.getadultf();
			B.price=price1;
			b.write((char*)&B,sizeof(B));
			}


	   }

	   break;
    case 2:     fstream fb;
		fb.open("dbusinessclass",ios::binary|ios::in);
		if(!fb)
		cout<<"CANNOT OPEN FILE";
		else
		{

			cout<<"\nENTER THE AGE OF THE PASSENGER:";
			cin>>age;
			if(age<=5)
			{
			fb.read((char*)&PB,sizeof(PB));
			PB.toddler();
			price1=PB.gettodb();
			B.price=price1;
			b.write((char*)&B,sizeof(B));
			}
			else if(age<=14)
			{
			fb.read((char*)&PB,sizeof(PB));
			PB.children();
			   price1=PB.getkidb();
			 B.price=price1;
			 b.write((char*)&B,sizeof(B));
			}
			else
			{
			fb.read((char*)&PB,sizeof(PB));
			PB.adult();
			price1=PB.getadultb();
			B.price=price1;
			b.write((char*)&B,sizeof(B));
			}
		}

		break;

    case 3: fstream fe;
	    fe.open("deconomicclass",ios::binary|ios::in);
	    if(!fe)
	    cout<<"CANNOT OPEN FILE";
	    else
	    {
		cout<<"\nENTER THE AGE OF THE PASSENGER:";
		cin>>age;
		if(age<=5)
		{
		fe.read((char*)&PE,sizeof(PE));
		PE.toddler();
		  price1=PE.gettode();
		  B.price=price1;
		  b.write((char*)&B,sizeof(B));
		}
		else if(age<=14)
		{
		fe.read((char*)&PE,sizeof(PE));
		PE.children();
		  price1=PE.getkide();
		  B.price=price1;
		  b.write((char*)&B,sizeof(B));
		}
		else
		{
		fe.read((char*)&PE,sizeof(PE));
		PE.adult();
		  price1=PE.getadulte();
		  B.price=price1;
		  b.write((char*)&B,sizeof(B));
		}
	    }

		break;

    default: cout<<"\nINVALID OPERATION";


    }//switch





clrscr();
B.dispbookingdd();
pos=pos-sizeof(B);
b.seekp(pos);
b.write((char*)&B,sizeof(B));
foundm=1;
}//if
}//while

if(!foundm)
cout<<"RECORD NOT FOUND";
b.close();
d1.close();
 returnmodify();
getch();
}
void returnmodify()
{
int ch2;
cout<<"\nPRESS 1 TO RETUR TO MAIN MENU 2.MODIFY MORE:";
cin>>ch2;
switch(ch2)
{
 case 1:mainmenu();
	break;
 case 2:modify();
	break;
 default:returnmodify();
}
}
void cancellation()
{
void returndelete();
clrscr();
int ticket,found=0;

fstream fdelete,td;
fdelete.open("BOOKING",ios::in|ios::binary);
td.open("temp",ios::binary|ios::in|ios::out);
if(!td)
   cout<<"\nCANNOT OPEN FILE";
cout<<"\nENTER THE PASSPORT NUMBER TO BE DELETED:";
cin>>ticket;
while(fdelete.read((char*)&B,sizeof(B)))
{
if(ticket==B.getticketno())
{
B.dispbookingdd();
cout<<"\nTHIS RECORD IS DELETED";
found=1;
}
else
td.write((char*)&B,sizeof(B));
}
if(!found)
cout<<"RECORD NOT FOUND";
fdelete.close();
td.close();
remove("BOOKING");
rename("temp","BOOKING");
returndelete();
getch();
}
void returndelete()
{
int ch2;
cout<<"\nPRESS 1 TO RETUR TO MAIN MENU 2.CANCEL TICKET AGAIN";
cin>>ch2;
switch(ch2)
{
 case 1:mainmenu();
	break;
 case 2:cancellation();
	break;
 default:returndelete();
}
}
void pricedetails()
{
clrscr();
void returnprice();
fstream ff,fb,fe;
ff.open("dfirstclass",ios::in,ios::binary);
if(!ff)
  cout<<"CANNOT OPEB FILE";
fb.open("dbusinessclass",ios::in,ios::binary);
if(!fb)
  cout<<"CANNOT OPEB FILE";
fe.open("deconomicclass",ios::in,ios::binary);
if(!fe)
  cout<<"CANNOT OPEB FILE";
cout<<"\nTICKET PRICE DETAILS";
cout<<"\n********************";
cout<<"\n*FIRST CLASS";
while(ff.read((char*)&PF,sizeof(PF)))
{
 PF.disp();
}
cout<<"\n*BUSINESS CLASS";
while(fb.read((char*)&PB,sizeof(PB)))
{
 PB.disp();
}
cout<<"\n*ECONONMIC CLASS";
while(fe.read((char*)&PE,sizeof(PE)))
{
 PE.disp();
}
returnprice();
getch();
}
void returnprice()
{
int ch2;
cout<<"\nPRESS 1 TO RETURN TO MAIN MENU ";
cin>>ch2;
switch(ch2)
{
 case 1:mainmenu();
	break;
 default:returndelete();
}
getch();
}
void display()
{
clrscr();
void returndisplay();
fstream f;
f.open("BOOKING",ios::in|ios::binary|ios::out);
while(f.read((char*)&B,sizeof(B)))
{
B.dispbookingdd();
delay(5000);
cout<<"\n";
}
f.close();
returndisplay();
getch();
}
void returndisplay()
{
int ch2;
cout<<"\nPRESS 1 TO RETUR TO MAIN MENU 2.DISPLAY AGAIN";
cin>>ch2;
switch(ch2)
{
 case 1:mainmenu();
	break;
 case 2:display();
	break;
 default:returndisplay();
}
}

void booking::getbooking()
 {
 cout<<"\nENTER THE PASSPORTNO           :";cin>>ticketno;
 cout<<"\nENTER THE PASSENGER'S FIRSTNAME:";gets(firstname);
 cout<<"\nENTER THE PASSENGER'S LASTNAME :";gets(lastname);
 cout<<"\nENTER THE PHONE NUMBER         :";cin>>phone;
 cout<<"\nENTER THE EMAIL                :";gets(email);
 cout<<"\nENTER THE FOOD TYPE            :";gets(food);
 cout<<"\nENTER THE PLACE OF DEPARTURE   :";gets(dept);
 cout<<"\nENTER THE DESTINATION          :";gets(dest);
 }
 void booking::dispbooking()
 {
 cout<<"\nASSPORTNO          :"<<ticketno;
 cout<<"\nPASSENGER'S FIRSTNAME:"<<firstname;
 cout<<"\nPASSENGER'S LASTNAME :"<<lastname;
 cout<<"\nPLACE OF DEPARTURE   :"<<dept;
 cout<<"\nDESTINATION          :"<<dest;
 cout<<"\nPHONE NUMBER         :"<<phone;
 cout<<"\nEMAIL                :"<<email;
 cout<<"\nFOOD TYPE            :"<<food;
 randomize();
 seat=random(100);
 cout<<"\nSEAT NO              :"<<seat;
 }

void flightdom::dispflight()
{
cout<<"\nYOUR FLIGHT NO IS    :"<<fno;
cout<<"\nTIME of your flight  :"<<t.h<<":"<<t.m<<":"<<t.s;

}
void dfirst::toddler()
{
cout<<"\nTICKET PRICE       RS:"<<todf;
}
void dfirst::children()
{
cout<<"\nTICKET PRICE       RS:"<<kidf;
}
void dfirst::adult()
{
cout<<"\nTICKET PRICE       RS:"<<adultf;
}
void dbusiness::toddler()
{
cout<<"\nTICKET PRICE       RS:"<<todb;
}
void dbusiness::children()
{
cout<<"\nTICKET PRICE       RS:"<<kidb;
}
void dbusiness::adult()
{
cout<<"\nTICKET PRICE       RS:"<<adultb;
}
void deconomic::toddler()
{
cout<<"\nTICKET PRICE       RS:"<<tode;
}
void deconomic::children()
{
cout<<"\nTICKET PRICE       RS:"<<kide;
}
void deconomic::adult()
{
cout<<"\nTICKET PRICE       RS:"<<adulte;
}
void dfirst::disp()
{
cout<<"\nADULTS:            RS:"<<adultf;
cout<<"\nCHILDREN           RS:"<<kidf;
cout<<"\nINFANTS            RS:"<<todf;
}
void dbusiness::disp()
{
cout<<"\nADULTS:            RS:"<<adultb;
cout<<"\nCHILDREN           RS:"<<kidb;
cout<<"\nINFANTS            RS:"<<todb;
}
void deconomic::disp()
{
cout<<"\nADULTS:            RS:"<<adulte;
cout<<"\nCHILDREN           RS:"<<kide;
cout<<"\nINFANTS            RS:"<<tode;
}
 void flightdom::dispflightd()
{
 cout<<"\n\nFLIGHTNO          :"<<fno;
 cout<<"\nPLACE OF DEPARTURE:"<<dept;
 cout<<"\nDESTINATION       :"<<dest;
 cout<<"\nTIME              :"<<t.h<<":"<<t.m;
}

 void flightdom::disptimed()
 {
 cout<<t.h<<":"<<t.m<<" ";
 }
 void booking::dispbookingdd()
 {
 cout<<"\n\n\nPASSPORTNO           :"<<ticketno;
 cout<<"\nPASSENGER'S FIRSTNAME:"<<firstname;
 cout<<"\nPASSENGER'S LASTNAME :"<<lastname;
 cout<<"\nPLACE OF DEPARTURE   :"<<dept;
 cout<<"\nDESTINATION          :"<<dest;
 cout<<"\nPHONE NUMBER         :"<<phone;
 cout<<"\nEMAIL                :"<<email;
 cout<<"\nFOOD TYPE            :"<<food;
 cout<<"\nFLIGHT NO            :"<<flightno1;
 cout<<"\nTIME                 :"<<tb.h<<":"<<tb.m;
 cout<<"\nPRICE OF  THE TICKET :"<<price;
 cout<<"\nSEAT NO              :"<<seat;
 }