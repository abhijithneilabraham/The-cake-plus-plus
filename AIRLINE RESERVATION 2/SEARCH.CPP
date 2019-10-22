#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<fstream.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
class flightdom
{
	char fno[10];
	char dept[20],dest[20];

	int seat[10];
	public:
	struct time
	{
	int h,m,s;
	}t;
	char* getfno(){return fno;}
	char* getdept(){return dept;}
	char* getdest(){return dest;}
	void dispflightd();
	void disptimed();

}D;
struct time1
{
 int h,m,s;
}ts;
/*class flightint
{
	char fno[10];
	char dept[20],dest[20];
	struct time
	{
	int h,m,s;
	}t;
	int seat[10];
	public:
	char* getfno(){return fno;}
	char* getdept(){return dept;}
	char* getdest(){return dest;}
	time   gettime(){return t;}

	void dispflighti();


}I;*/
void main()
{
clrscr();
/*int ch;
  cout<<"SEARCH";
  cout<<"\n*****";
  cout<<"\n1.DOMESTIC\n2.INTERNATIONAL";
  cout<<"\nENTER THE CHOICE:";
  cin>>ch;
  if(ch==1)
 {
 clrscr();*/
fstream d;
d.open("DOMESTIC",ios::binary|ios::in|ios::out);
if(!d)
  cout<<"Cannot open file";
else
{
 int ch1,found=0,f=0;

 char fnos[10],depts[20],dests[20];

 cout<<"\nSEARCH BY FLIGHTNO";
 cout<<"\nSEARCH BY PLACE OF DEPARTURE";
 cout<<"\nSEARCH BY DESTINATION";
 cout<<"\nSEARCH BY TIME";
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
	 do
	 {
	 while(d.read((char*)&D,sizeof(D)))
	 {
	 f+=1;
	 if(strcmpi(depts,D.getdept())==0)
	  {
	    D.dispflightd();
	    found+=1;
	    break;
	    }
	   }
	   }while(f<43);
	  d.close();
	  if(!found)
	  cout<<"RECORD DOESNOT EXIST";
	  getch();
	  break;

  case 3:cout<<"\nENTER THE DESTINATION";
	 gets(dests);
	 do
	 {
	 while(d.read((char*)&D,sizeof(D)))
	 {
	 f+=1;
	 if(strcmpi(dests,D.getdest())==0)
	  {
	    D.dispflightd();
	    found=1;
	    break;
	    }
	   }
	   }while(f<42);

	  d.close();
	  if(!found)
	  cout<<"RECORD DOESNOT EXIST";
	  getch();
	  break;

   case 4 :
	  cout<<"\nYOU HAVE FLIGHTS AVAILABLE AT THESE TIMES:";
	  while(d.read((char*)&D,sizeof(D)))
	  D.disptimed();
	  cout<<"Enter the time";
	  cin>>ts.h>>ts.m>>ts.s;

	  do
	  {
	   while(d.read((char*)&D,sizeof(D)))
	 {
	    if(ts.h==D.t.h && ts.m==D.t.h && ts.s==D.t.s)
	  {
	    D.dispflightd();
	    found=1;
	    break;
	    }
	   }//while

	   }while(found<42);

	  d.close();
	  if(!found)
	  cout<<"RECORD DOESNOT EXIST";
	  break;



 }
	}//else
	getch();
	}
/*	}//if
if(ch==2)
{

clrscr();

fstream i;
i.open("inter",ios::binary|ios::in|ios::out);
if(!i)
  cout<<"Cannot open file";
else
 {
   int ch,ch1,found=0,f=0;
 char fnos[10],depts[20],dests[20];

 cout<<"\nSEARCH BY FLIGHTNO";
 cout<<"\nSEARCH BY PLACE OF DEPARTURE";
 cout<<"\nSEARCH BY DESTINATION";
 cout<<"\nSEARCH BY TIME";
 cout<<"\nENTER YOUR CHOICE";
 cin>>ch1;
 switch(ch1)
 {
   case 1:cout<<"\nENTER FLIGHTNO:";
	  gets(fnos);
	  while(i.read((char*)&I,sizeof(I)))
	  {
	   if(strcmpi(fnos,I.getfno())==0)
	   {
	    I.dispflighti();
	    found=1;
	    break;
	    }
	   }
	  i.close();
	  if(!found)
	  cout<<"RECORD DOESNOT EXIST";
	  getch();
	  break;
    case 2:cout<<"\nENTER THE PLACE OF DEPARTURE";
	 gets(depts);
	 do
	 {
	 while(i.read((char*)&I,sizeof(I)))
	 {
	 f+=1;
	 if(strcmpi(depts,I.getdept())==0)
	  {
	    I.dispflighti();
	    found=1;
	    break;
	    }
	   }
	   }while(f<91);
	  i.close();
	  if(!found)
	  cout<<"RECORD DOESNOT EXIST";
	  getch();
	  break;
  case 3:cout<<"\nENTER THE DESTINATION";
	 gets(dests);
	 do
	 {
	 while(i.read((char*)&I,sizeof(I)))
	 {
	 f+=1;
	 if(strcmpi(dests,I.getdest())==0)
	  {
	    I.dispflighti();
	    found=1;
	    break;
	    }
	   }
	   }while(f<91);

	  i.close();
	  if(!found)
	  cout<<"RECORD DOESNOT EXIST";
	  getch();
	  break;
	  }
	  }//else

getch();
}//if
}


	void flightint::dispflighti()
	{
	cout<<"\n\nFLIGHTNO          :"<<fno;
	cout<<"\nPLACE OF DEPARTURE:"<<dept;
	cout<<"\nDESTINATION       :"<<dest;
	cout<<"\nTIME              :"<<t.h<<":"<<t.m<<":"<<t.s;
	}
*/
 void flightdom::dispflightd()
	{
	cout<<"\n\nFLIGHTNO          :"<<fno;
	cout<<"\nPLACE OF DEPARTURE:"<<dept;
	cout<<"\nDESTINATION       :"<<dest;
	cout<<"\nTIME              :"<<t.h<<":"<<t.m<<":"<<t.s;
	}

 void flightdom::disptimed()
	{
	cout<<"\nTIME              :"<<t.h<<":"<<t.m<<":"<<t.s<<endl;
	}






