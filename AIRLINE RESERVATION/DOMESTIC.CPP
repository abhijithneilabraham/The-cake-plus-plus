#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class flightdom
{
	char fno[10];
	char dept[20],dest[20];
	struct time
	{
	int h,m,s;
	}t;
	int seat[10];
	public:
	void getflight();

	void dispflight();


}D;
void main()
{
clrscr();

fstream d;
d.open("domestic",ios::binary|ios::in|ios::out);
if(!d)
  cout<<"Cannot open file";
else
 {
  for(int i=0;i<42;i++)
  {
   D.getflight();
   d.write((char*)&D,sizeof(D));
  }
d.seekg(0);
while(d.read((char*)&D,sizeof(D)))
{
D.dispflight();
}
}
d.close();
getch();
}
	void flightdom::getflight()
	{
	cout<<"\nEnter the flightno          :";
	cin>>fno;
	cout<<"Enter the place of departure:";
	gets(dept);
	cout<<"Enter the destination       :";
	gets(dest);
	cout<<"Enter the time              :";
	cin>>t.h>>t.m>>t.s;
	for(int i=1;i<11;i++)
	seat[i]=i;
	}
	void flightdom::dispflight()
	{
	cout<<"\n\nFLIGHTNO          :"<<fno;
	cout<<"\nPLACE OF DEPARTURE:"<<dept;
	cout<<"\nDESTINATION       :"<<dest;
	cout<<"\nTIME              :"<<t.h<<t.m<<t.s;
	cout<<"\nSEATS AVAILABLE   :";
	for(int i=1;i<11;i++)
	cout<<seat[i]<<" ";
	}







