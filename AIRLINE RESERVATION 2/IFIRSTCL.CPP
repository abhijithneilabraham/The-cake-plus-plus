#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class firstclass
{
long adult,kids;
public:
void getprice();
void dispprice();
}P;
void main()
{
clrscr();
fstream p;
p.open("ifirstclass",ios::binary|ios::in|ios::out);
if(!p)
 cout<<"CANNOT OPEN FILE";
else
 P.getprice();
 p.write((char*)&P,sizeof(P));
 p.seekg(0);
 P.dispprice();
 p.close();
 getch();
 }
 void firstclass::getprice()
 {
 cout<<"Enter the ticket price for adults";
 cin>>adult;
 cout<<"\nEnter the ticket price for children";
 cin>>kids;
 }
 void firstclass::dispprice()
 {
 cout<<"\nticket price for adults"<<adult;
 cout<<"\nticket price for children"<<kids;
 }