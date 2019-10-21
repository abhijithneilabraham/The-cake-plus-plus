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
int pricecha;
int adult,children,toddler
cout<<"ENTER THE NO OF ADULTS:";
cin>>adult;
for(int i=0;i<adult;i++)
 {
  cout<<"\nENTER THE PREFERED CLASS:(1.FIRST CLASS 2.BUSINESS CLASS 3.ECONOMIC CLASS:";
  cin>>pricecha;
  switch(pricech)
  {
case 1: ff.open("dfirstclass",ios::in);
	if(!ff)
	cout<<"CANNOT OPEN FILE";


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
