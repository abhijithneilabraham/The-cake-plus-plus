#include<fstream.h>
#include<iostream.h>
#include<iomanip.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<dos.h>
#include<string.h>
#include<graphics.h>
class airline
{
 char name[20];
 char addr[30];
 char email[20];
 long int phone;
 long int passno;
 long int date;
 char source[30];
 char dest[30];
 char dep[20];
 char arrv[20];
 int pword;
 public:
 void mainmenu();
 void showmenu();
 void highlight(int);
 void highlight_modify(int);
 void show_modify();
 void reserve();
 void display();
 void cancel();
 void modify();
 void m_name();
 void m_date();
 void m_mode();
 void about();
 void cls();
}ob;
ifstream fin;
ofstream fout;
int choice;
int size=sizeof(airline);
void circle()
{

}
void line()
{
 cout<<"\n";
 for(int i=0;i<80;i++)
  cout<<"-";
 cout<<"\n";
}
void airline::mainmenu()
{
char ch;
int count=1;
textbackground(0);
textcolor(15);
clrscr();
ob.showmenu();
highlight(1);
_setcursortype(_NOCURSOR);
while(1)
{
 ch=getch();
  switch(ch)
   {
    case 80:
     count+=1;
     if(count==8) count=1;
       break;
    case 72:
     count-=1;
     if(count==0) count=7;
       break;
    }
  showmenu();
  ob.highlight(count);
 if(ch=='\r')
  {
   ob.cls();
   if(count==7)exit(0);
   if(count==1)
 {
  clrscr();
  info();
  ob.mainmenu();
  }
   if(count==2) ob.reserve();
   if(count==3)
 {
  clrscr();
  ob.display();
  getch();
      }
   if(count==4)ob.modify();
   if(count==5)
 {
  ob.cancel();
  getch();
      }

   if(count==6)
 {
 clrscr();
 about();
 }


  }
}
}

// For displaying menu

void airline::showmenu()
 {
 int k=0;
  char *ch[]={"PLANE_INFO.","RESERVATION.","DISPLAY.","MODIFY.","CANCELATION.","ABOUT PROGRAM.","EXIT."};
  textcolor(7);
  int i;
  box(18,3,60,7);
  gotoxy(30,5);
  printf(" ==== MAIN MENU ====");
  textbackground(0);
  box(18,9,60,25);
  for(i=0;i<7;i++)
   {
    gotoxy(32,11+k);
    cprintf("%s",ch[i]);
    k+=2;

   }
 }

 //for heighlight items
 void airline::highlight(int item)
  {
   textcolor(WHITE);
   textbackground(2);
     switch(item)
      {
       case 1:
 gotoxy(32,11);
 cprintf("PLANE_INFO.");
  break;
       case 2:
 gotoxy(32,13);
 cprintf("RESERVATION.");
  break;
       case 3:
 gotoxy(32,15);
 cprintf("DISPLAY.");
  break;
       case 4:
 gotoxy(32,17);
 cprintf("MODIFY.");
  break;
       case 5:
 gotoxy(32,19);
 cprintf("CANCELATION.");
  break;
       case 6:
 gotoxy(32,21);
 cprintf("ABOUT PROGRAM.");
  break;
       case 7:
 gotoxy(32,23);
 cprintf("EXIT.");
  break;
     }
  }

  void airline::cls()
   {
    textcolor(15);
    textbackground(0);
      for(int c=1;c<=79;c++)
       for(int r=1;r<=24;r++)
 {
  gotoxy(c,r);
  cprintf(" ");
 }

    }
void airline::modify()
    {
 char ch;
 int count=1;
 textbackground(0);
 textcolor(15);
 clrscr();
 ob.show_modify();
 highlight_modify(1);
 while(1)
 {
  ch=getch();
  switch(ch)
   {
    case 80:
     count++;
     if(count==5) count=1;
       break;
    case 72:
     count--;
     if(count==0) count=4;
       break;
    }
  ob.show_modify();
  ob.highlight_modify(count);
 if(ch=='\r')
  {
   cls();
   if(count==4)ob.mainmenu();
   if(count==1)m_name();
   if(count==2)m_date();
   if(count==3)m_mode();
  }
}
}
void airline::show_modify()
 {
 int k=0;
  char *ch[]={"   NAME.","   DATE.","   MODE.","   >>>BACK<<<"};
  textcolor(7);
  int i;
  box(29,4,49,6);
   gotoxy(30,5);
  printf("====MODIFY MENU====");
  textbackground(0);
  box(29,7,49,20);
  for(i=0;i<4;i++)
   {
    gotoxy(30,9+k);
  //  outtextxy(30,9+k,ch[i]);
    cprintf("%s",ch[i]);
    k+=2;

   }

 }

 //for heighlight items
 void airline::highlight_modify(int item)
  {
   textcolor(WHITE);
   textbackground(2);
     switch(item)
      {
       case 1:
 gotoxy(33,9);
 cprintf("NAME.");
  break;
       case 2:
 gotoxy(33,11);
 cprintf("DATE.");
  break;
       case 3:
 gotoxy(33,13);
 cprintf("MODE.");
  break;
       case 4:
 gotoxy(33,15);
 cprintf(">>>BACK<<<.");
  break;
     }
  }
 void airline::m_name()
{

int login,flg=0;
  FILE *fp;
  fp=fopen("xxxx.txt","r+");
  cout<<"\nEnter your password : ";
  cin>>login;


   while(fread(&ob,sizeof(ob),1,fp)==1)
  {
    if(login==pword)
    {
     flg=1;
     clrscr();
     box(5,2,75,15);
     gotoxy(28,2);
     cout<<" ++ Search Results ++ ";
     gotoxy(8,5);
     cout<<" Resv ID : "<<pword;
     gotoxy(8,6);
     cout<<" Name :  "<<name;
     gotoxy(8,10);
     cout<<" Enter New Name : ";
     gets(name);

      fseek(fp, ftell(fp) - sizeof(ob),0);
      fwrite(&ob, sizeof(ob), 1, fp);

     }
    else
    {

     flg=0;
    }

       }
  if(flg==0)
  {
         clrscr();
          gotoxy(28,13);
    cout<<" +++ Record Not Found +++ ";
    getch();

   }

   else
  {
     gotoxy(28,24);
    cout<<" +++ Database Updated +++ ";

      getch();

   }
      fclose(fp);
      ob.mainmenu();
     }


 void airline::m_date()
 {
 int login,flg=0;
  FILE *fp;
  fp=fopen("xxxx.txt","r+");
  cout<<"\nEnter your password : ";
  cin>>login;


   while(fread(&ob,sizeof(ob),1,fp)==1)
  {
    if(login==pword)
    {
     flg=1;
     clrscr();
     box(5,2,75,15);
     gotoxy(28,2);
     cout<<" ++ Search Results ++ ";
     gotoxy(8,5);
     cout<<" Resv ID : "<<pword;
     gotoxy(8,6);
     cout<<" Name :  "<<date;
     gotoxy(8,10);
     cout<<" Enter New Date : ";
     cin>>date;

      fseek(fp, ftell(fp) - sizeof(ob),0);
      fwrite(&ob, sizeof(ob), 1, fp);

     }
    else
    {

     flg=0;
    }

       }
  if(flg==0)
  {
         clrscr();
          gotoxy(28,13);
    cout<<" +++ Record Not Found +++ ";
    getch();

   }

   else
  {
     gotoxy(28,24);
    cout<<" +++ Database Updated +++ ";

      getch();

   }
      fclose(fp);
      ob.mainmenu();

  }

 void airline::m_mode()
 {
 int login,flg=0;
 int mode,plno;
 char pname[10];

   FILE *fp;
  fp=fopen("xxxx.txt","r+");
  cout<<"\nEnter your password : ";
  cin>>login;


  while(fread(&ob,sizeof(ob),1,fp)==1)
    {
 if(login==pword)
   {    flg=1;
  cout<<"\n\t1:Domestic\n\t2:International\nEnter the mode:";
  cin>>mode;
  if(mode==1)
  {
   cout<<"\nEnter the plane 1 , 2 , 3 , 4 , 5  - ";
   cin>>plno;
   switch(plno)
   {
    case 1: strcpy(pname,"aado1");
      strcpy(source,"Chennai");
      strcpy(dest,"Mumbai");
      strcpy(dep,"10:00");
      strcpy(arrv,"11:00");
      break;

     case 2:   strcpy(pname,"aado2");
      strcpy(source,"Mumbai");
      strcpy(dest,"Kolkata");
      strcpy(dep,"12:00");
      strcpy(arrv,"13:15");
      break;


     case 3:   strcpy(pname,"aado3");
      strcpy(source,"Kolkata");
      strcpy(dest,"Chennai");
      strcpy(dep,"17:00");
      strcpy(arrv,"18:00");
      break;

     case 4:   strcpy(pname,"aado4");
      strcpy(source,"Delhi");
      strcpy(dest,"Mumbai");
      strcpy(dep,"10:00");
      strcpy(arrv,"13:00");
      break;

     case 5:   strcpy(pname,"aado5");
      strcpy(source,"Chandighar");
      strcpy(dest,"Delhi");
      strcpy(dep,"15:00");
      strcpy(arrv,"12:00");
      break;
   }
  }
  else
  if(mode==2)
  {
   cout<<"\nEnter the plane 1 , 2 , 3 , 4 , 5  - ";
   cin>>plno;
   switch(plno)
   {

     case 1: strcpy(pname,"aai01");
      strcpy(source,"Mumbai");
      strcpy(dest,"London");
      strcpy(dep,"00:30");
      strcpy(arrv,"10:30");
      break;

     case 2:   strcpy(pname,"aai02");
      strcpy(source,"Delhi");
      strcpy(dest,"Paris");
      strcpy(dep,"03:20");
      strcpy(arrv,"13:20");
      break;

     case 3:   strcpy(pname,"aaio3");
      strcpy(source,"Chennai");
      strcpy(dest,"Colombo");
      strcpy(dep,"19:30");
      strcpy(arrv,"20:30");
      break;

     case 4:   strcpy(pname,"aaio4");
      strcpy(source,"Patna");
      strcpy(dest,"U.S.A");
      strcpy(dep,"10:30");
      strcpy(arrv,"23:30");
      break;

     case 5:   strcpy(pname,"aaio5");
      strcpy(source,"Chandighar");
      strcpy(dest,"Austaliya");
      strcpy(dep,"15:30");
      strcpy(arrv,"12:30");
      break;

    }
  }


    fseek(fp, ftell(fp) - sizeof(ob),0);
   fwrite(&ob, sizeof(ob), 1, fp);
 }
    else
      {
 flg=0;
 }
   }
  if(flg==0)
  {
         clrscr();
          gotoxy(28,13);
    cout<<" +++ Record Not Found +++ ";
    getch();

   }

   else
  {         clrscr();
     gotoxy(28,24);
    cout<<" +++ Database Updated +++ ";

      getch();

   }
      fclose(fp);
      ob.mainmenu();

  }
void main()
{
 fout.close();
 circle();
 ob.mainmenu();
 getch();

}


void airline::reserve()
{
 int mode,plno;
 char pname[10];
  clrscr();
  fout.open("xxxx.txt",ios::app);
  cout<<"\nEnter passengers details : ";
  cout<<"\nName - ";
  gets(name);
  cout<<"\nAddress - ";
  gets(addr);
  cout<<"\nE-Mail ID - ";
  gets(email);
  cout<<"\nTelephone no - ";
  cin>>phone;
  cout<<"\nEnter the date of travelling : ";
  cin>>date;
  line();
  cout<<"\n\t1:Domestic\n\t2:International\nEnter the mode:";
  cin>>mode;
  if(mode==1)
  {
   cout<<"\nEnter the plane 1 , 2 , 3 , 4 , 5  - ";
   cin>>plno;
   switch(plno)
   {
    case 1: strcpy(pname,"aado1");
      strcpy(source,"Chennai");
      strcpy(dest,"Mumbai");
      strcpy(dep,"10:00");
      strcpy(arrv,"11:00");
      break;

     case 2:   strcpy(pname,"aado2");
      strcpy(source,"Mumbai");
      strcpy(dest,"Kolkata");
      strcpy(dep,"12:00");
      strcpy(arrv,"13:15");
      break;


     case 3:   strcpy(pname,"aado3");
      strcpy(source,"Kolkata");
      strcpy(dest,"Chennai");
      strcpy(dep,"17:00");
      strcpy(arrv,"18:00");
      break;

     case 4:   strcpy(pname,"aado4");
      strcpy(source,"Delhi");
      strcpy(dest,"Mumbai");
      strcpy(dep,"10:00");
      strcpy(arrv,"13:00");
      break;

     case 5:   strcpy(pname,"aado5");
      strcpy(source,"Chandighar");
      strcpy(dest,"Delhi");
      strcpy(dep,"15:00");
      strcpy(arrv,"12:00");
      break;
   }
  }
  else
  if(mode==2)
  {
   cout<<"\nEnter the plane 1 , 2 , 3 , 4 , 5  - ";
   cin>>plno;
   switch(plno)
   {

     case 1: strcpy(pname,"aai01");
      strcpy(source,"Mumbai");
      strcpy(dest,"London");
      strcpy(dep,"00:30");
      strcpy(arrv,"10:30");
      break;

     case 2:   strcpy(pname,"aai02");
      strcpy(source,"Delhi");
      strcpy(dest,"Paris");
      strcpy(dep,"03:20");
      strcpy(arrv,"13:20");
      break;

     case 3:   strcpy(pname,"aaio3");
      strcpy(source,"Chennai");
      strcpy(dest,"Colombo");
      strcpy(dep,"19:30");
      strcpy(arrv,"20:30");
      break;

     case 4:   strcpy(pname,"aaio4");
      strcpy(source,"Patna");
      strcpy(dest,"U.S.A");
      strcpy(dep,"10:30");
      strcpy(arrv,"23:30");
      break;

     case 5:   strcpy(pname,"aaio5");
      strcpy(source,"Chandighar");
      strcpy(dest,"Austaliya");
      strcpy(dep,"15:30");
      strcpy(arrv,"12:30");
      break;

    }
  }



   randomize();
  pword=random(1000);
  cout<<"\nPASSWORD\t"<<pword;
  getch();
  fout.write((char*)&ob,size);
  fout.close();
  line();
  ob.mainmenu();

}
void airline::display()
{
   cout<<"\n\n\t++++ Passenger Reports ++++\n";
   line();
   cout<<"RESNO"<<setw(12)<<"NAME"<<setw(12) ;
cout<<"ADDRESS"<<setw(12)<<"SOURCE";
cout<<setw(16)<<"DESTINATION"<<setw(12)<<"DATE";
   fin.open("xxxx.txt");
   line();
   while(fin.read((char*)&ob,size))
   {
    cout<<pword<<setw(12)<<name;
cout<<setw(12)<<addr<<setw(12);
cout<<source<<setw(16)<<dest<<setw(14)<<date<<"\n";
   }
   line();
   fin.close();
   getche();
   ob.mainmenu();
}

void airline::cancel()
{
 int login,p=0;
  fin.open("xxxx.txt");
  fout.open("temp.txt");
  cout<<"\nEnter your password : ";
  cin>>login;
  while(fin)
  {
   if(login==pword)
    p=1;
   if(login!=pword)
    fout.write((char*)&ob,size);
   fin.read((char*)&ob,size);
  }
  fin.close();
  fout.close();
  remove("xxxx.txt");
  rename("temp.txt","xxxx.txt");
  clrscr();
  if(p==0)
   cout<<"\nNo match found";
  else
   cout<<"\nReservation cancelled";
   getch();
   ob.mainmenu();
}

void airline::about ()
{
box(18,2,65,4);
gotoxy(32,3);
printf("   About Program   ");
textbackground(0);
box(18,5,65,24);
gotoxy (38,7);
textcolor (WHITE);
cprintf ("Made By");
gotoxy (25,9);
textcolor(7);
cprintf ("sourcecodernp");
gotoxy (22,12);
textcolor (WHITE);
cprintf ("Presented To :");
gotoxy (37,12);
textcolor (7);
cprintf ("Faculty Name ");
gotoxy (22,16);
textcolor (WHITE);
cprintf ("Project      :");
gotoxy (37,16);
textcolor (7);
cprintf ("Airline Reservation System");
gotoxy (22,20);
textcolor(WHITE);
cprintf ("Conact Info  :");
gotoxy (37,20);
textcolor (7);
cprintf("sourcecodernp.blogspot.com");
gotoxy (26,26);
textcolor (WHITE);
cprintf ("LOVELY PROFESSIONAL UNIVERSITY");
getch();
mainmenu();
}