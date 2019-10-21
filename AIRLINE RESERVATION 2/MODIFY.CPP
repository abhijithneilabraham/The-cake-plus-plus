#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
//for remove and rename
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
	int getticketno(){return ticketno;}
	time gettime(){return tb;}
	long int getprice(){return price;}
	char* flightno(){return flightno1;}
	char* getdept(){return dept;}
	char* getdest(){return dest;}
	void getbooking();
	void dispbooking();
	void dispbookingdis();
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
}PE;
struct dob
{
int d,m,y;
}date;
class flightdom
{
	char fno1[10];
	char dept1[20],dest1[20];

	public:
	struct time
	{
	int h,m,s;
	}t;
	int seat[10];
	char* fno(){return fno1;}
	char* getdept1(){return dept1;}
	char* getdest1(){return dest1;}
	time  gettime(){return t;}

	void getflight();

	void dispflight();


}D1;

void main()
{
clrscr();
int ticket,foundm=0,pos;
long int price1;
char enter;
int found=0,chclass,age,n;

fstream d1;

d1.open("DOMESTIC",ios::binary|ios::in);
if(!d1)
 cout<<"CANNOT OPEN FILE";
fstream b;
b.open("BOOKING",ios::in|ios::binary);
cout<<"\nENTER THE PASSPORT NUMBER TO BE MODIFIED:";
cin>>ticket;
while(b.read((char*)&B,sizeof(B)))
{
pos=b.tellg();
if(ticket==B.getticketno())
{

B.dispbookingdis();
cout<<"\nENTER THE NEW DETAILS:";
  B.getbooking();
  do
  {

  if(strcmpi(D1.getdept1(),B.getdept())==0 && strcmpi(D1.getdest1(),B.getdest())==0)
    {

      strcpy(B.flightno(),D1.fno());
      B.tb.h=D1.t.h;
      B.tb.m=D1.t.m;
      B.tb.s=D1.t.s;
      found=1;
      //b.write((char*)&B,sizeof(B));

      break;

    }
    }while(d1.read((char*)&D1,sizeof(D1)));

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
  B.dispbooking();
   if(chclass==1)
    {

			if(age<=5)
			{
			PF.toddler();
			}
			else if(age<=14)
			{
			PF.children();
			}
			else
			{
			PF.adult();
			}


     }

   else if(chclass==2)
     {
			if(age<=5)
			{
			PB.toddler();
			}
			else if(age<=14)
			{
			PB.children();
			}
			else
			{
			PB.adult();
			}
     }

   else
   {
		if(age<=5)
		{
		PE.toddler();
		}
		else if(age<=14)
		{
		PE.children();
		}
		else
		{
		PE.adult();
		}
    }


  D1.dispflight();


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
getch();
}//void main
 void booking::dispbookingdis()
 {
  cout<<"PASSPORTNO           :"<<ticketno;
 cout<<"\nPASSENGER'S FIRSTNAME:"<<firstname;
 cout<<"\nPASSENGER'S LASTNAME :"<<lastname;
 cout<<"\nPLACE OF DEPARTURE   :"<<dept;
 cout<<"\nDESTINATION          :"<<dest;
 cout<<"\nPHONE NUMBER         :"<<phone;
 cout<<"\nEMAIL                :"<<email;
 cout<<"\nFOOD TYPE            :"<<food;
 cout<<"\nFLIGHT NO            :"<<flightno1;
 cout<<"\nTIME                 :"<<tb.h<<":"<<tb.m<<":"<<tb.s;
 cout<<"\nPRICE OF  THE TICKET :"<<price;
 cout<<"\nSEAT NO              :"<<seat;
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
  cout<<" PASSPORTNO          :"<<ticketno;
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
cout<<"\nYOUR FLIGHT NO IS    :"<<fno1;
cout<<"\nTIME of your flight  :"<<t.h<<":"<<t.m<<":"<<t.s;

}
void dfirst::toddler()
{
cout<<"\nTICKET PRICE         :"<<todf;
}
void dfirst::children()
{
cout<<"\nTICKET PRICE         :"<<kidf;
}
void dfirst::adult()
{
cout<<"\nTICKET PRICE         :"<<adultf;
}
void dbusiness::toddler()
{
cout<<"\nTICKET PRICE         :"<<todb;
}
void dbusiness::children()
{
cout<<"\nTICKET PRICE         :"<<kidb;
}
void dbusiness::adult()
{
cout<<"\nTICKET PRICE         :"<<adultb;
}
void deconomic::toddler()
{
cout<<"\nTICKET PRICE         :"<<tode;
}
void deconomic::children()
{
cout<<"\nTICKET PRICE         :"<<kide;
}
void deconomic::adult()
{
cout<<"\nTICKET PRICE         :"<<adulte;
}
