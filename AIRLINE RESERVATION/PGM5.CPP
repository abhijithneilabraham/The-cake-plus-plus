#include<iostream.h>
#include<conio.H>
class time
{
int h,m,s;
public:
time()
{
h,m,s=0;
}
~time()
{
cout<<"\nDESTRUCTOR";
}
time(time &t)
{
h=t.h;
m=t.m;
s=t.s;
cout<<"\nCOPY CONSTRUCTOR";
}
void get()
{
cin>>h>>m>>s;
}
void disp()
{
cout<<h<<":"<<m<<":"<<s;
}
time add(time,time);
}t1,t2,t3;
void main()
{
clrscr();
cout<<"\nEnter time 1";
t1.get();
cout<<"\nEnter time 2";
t2.get();
t3=t3.add(t1,t2);
cout<<"\nTime 1:";t1.disp();
cout<<"\nTime 2:";t2.disp();
cout<<"\nSum   :";t3.disp();
getch();
}
time time::add(time t1,time t2)
{
time t3;
t3.h=t1.h+t2.h;
t3.m=t1.m+t2.m;
t3.s=t1.s+t2.s;
if(t3.m>=60)
{
t3.h++;
t3.m%=60;
}
if(t3.s>=60)
{
t3.m++;
t3.s%=60;
}
return t3;
}
