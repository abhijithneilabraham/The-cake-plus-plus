#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class firstclass
{
long int adult,kid,tod;
public:
void getprice();
void dispprice();
}P;
void main()
{
clrscr();
fstream p;
p.open("dfirstclass",ios::binary|ios::in|ios::out);
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
 cin>>kid;
 cout<<"\nEnter the ticket price for toddlers";
 cin>>tod;
 }
 void firstclass::dispprice()
 {
 cout<<"\nticket price for adults  :"<<adult;
 cout<<"\nticket price for children:"<<kid;
 cout<<"\nticket price for toddler :"<<tod;
 }