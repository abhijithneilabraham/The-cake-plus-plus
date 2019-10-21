#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class economicclass
{
int adult,kids;
public:
void getprice();
void dispprice();
}P;
void main()
{
clrscr();
fstream p;
p.open("ieconomicclass",ios::binary|ios::in|ios::out);
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
 void economicclass::getprice()
 {
 cout<<"Enter the ticket price for adults";
 cin>>adult;
 cout<<"\nEnter the ticket price for children";
 cin>>kids;
 }
 void economicclass::dispprice()
 {
 cout<<"\nticket price for adults"<<adult;
 cout<<"\nticket price for children"<<kids;
 }