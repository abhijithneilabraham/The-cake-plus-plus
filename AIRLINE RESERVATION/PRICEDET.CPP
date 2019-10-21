#include<iostream.h>
#include<conio.h>
#include<fstream.h>
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
void main()
{
clrscr();
fstream ff,fb,fe;
int adult,children,toddler;
int pricech;
cout<<"ENTER THE TRAVELLING CLASS";
cout<<"\n1.FIRST CLASS ";
cout<<"\n2.BUSINESS CLASS";
cout<<"\n3.ECONOMIC CLASS";
cout<<"\nENTER YOUR CHOICE";
cin>>pricech;
switch(pricech)
{
case 1: ff.open("dfirstclass",ios::in);
	if(!ff)
	cout<<"CANNOT OPEN FILE";
	cout<<"ENTER THE NO  OF ADULTS";
	cin>>adult;
	cout<<"ENTER THE
	ff.close();
	break;

case 2: fb.open("dbusinessclass",ios::in);
	if(!fb)
	cout<<"CANNOT OPEN FILE";
	fb.close();
	break;
case 3: fe.open("deconomicclass",ios::in);
	if(!fe)
	cout<<"CANNOT OPEN FILE";
	fe.close();
	break;
}

getch();
}