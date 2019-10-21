#include<iostream>
#include<iomanip.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<fstream.h>
#include<dos.h>
using namespace std;

   char l_destination[5][20]={"LAHORE","ISLAMABAD","KARACHI","PESHAWAR","QUETTA"};
       char i_destination[10][20]={"LONDON","BERLIN","DUBAI","NEW YORK","BEIJING","PARIS","CAPE TOWN","TOKYO","LOS ANGELES","MUMBAI" };
class mytime
{
protected:
 int choose;
public:
 void getdata()
 {
  cout<<"ON WHICH TIME YOU WANT TO TRAVEL"<<endl;
  cout<<"PRESS 1 FOR 11 AM"<<endl;
  cout<<"PRESS 2 FOR 10 AM"<<endl;
  cout<<"PRESS 3 FOR 9 AM"<<endl;
  cin>>choose;
 }
 void show()
 {
  if(choose==1)
  {
    cout<<"|                                                                         "<<endl;
    cout<<"|flight mytime 11 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|flight mytime 11 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
       "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  }
  if(choose==2)
  {
    cout<<"|                                                                         "<<endl;
    cout<<"|flight mytime 10 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|flight mytime 10 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
       "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  }
  if(choose==3)
  {
    cout<<"|                                                                         "<<endl;
    cout<<"|flight mytime 9 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|flight mytime 9 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
       "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  }
 }
};
class passenger
{
public:
    virtual void getdata()
 {
 }
virtual void show()
 {
 }
};
class booking:public passenger
{
protected:
 int num;
 char ch;
 char firstname[60];
 char lastname[60];
 char address[60];
 char c_loc[30];
 char dest[30];
 char reservation_no[60];
 int option;
public:
 void getdata()
 {
  cout<<setw(40)<<"\n\n        ::Please enter the required information for passenger number::"<<endl;  
  cout<<"\n\n\nEnter the firstname of passenger: ";
   cin.getline(firstname,60);
   cout<<endl;
   cout<<"Enter the lastname of passenger: ";
   cin.getline(lastname,60);
   cout<<endl<<endl;
   cout<<"Enter address of passenger:  ";
   cin.getline(address,60);
   cout<<endl<<endl;
   cout<<"Enter the Resevation No. of Ticket"<<endl;
   cin.getline(reservation_no,60);
   cout<<endl;
   cout<<"Enter the current location of passenger(IN CAPITAL LETTERS ONLY):  ";
   cin.getline(c_loc,60);
   cout<<endl<<endl;
   cout<<"Enter the destination of passenger(IN CAPITAL LETTERS ONLY):  ";
   cin.getline(dest,60);
   cout<<endl<<endl;
   system("CLS");
 }
 void show()
 {
   cout<<setw(40)<<"Your E-Ticket is :"<<endl; 
   int t=1;
   int r=12345;
  cout<<"                           AIRLINE TICKET                                 "<<endl;
  cout<<"|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Resevation No. :"<<reservation_no<<"                                     "<<endl;
  cout<<"|__________________________________________________________________________"<<endl;
  cout<<"|Passenger Information :                                                  "<<endl;
  cout<<"|Name :"<<lastname<<"/"<<firstname<<"                                     "<<endl;
  cout<<"|                                                                         "<<endl;
  cout<<"|Address :"<<address<<"                                                   "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
     cout<<"|flight Information :                                                     "<<endl;
  cout<<"|12 aug 2011                                                              "<<endl;
  cout<<"|BOING 747                                                                "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Depart :"<<c_loc<<"                                                      "<<endl;
  cout<<"|Arrive :"<<dest<<"                                                       "<<endl;
  cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
  cout<<"|*contact Airline to Confirm baggage allowance                            "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
    
  ofstream outfile("E:\\E_ticket.txt");
        outfile<<"                           AIRLINE TICKET                                 "<<endl<<
   "|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl<<
      "|_________________________________________________________________________"<<endl<<
   "|Resevation No. :"<<reservation_no<<"                                     "<<endl<<
   "|__________________________________________________________________________"<<endl<<
      "|Passenger Information :                                                  "<<endl<<
      "|Name :"<<lastname<<"/"<<firstname<<"                                     "<<endl<<
      "|                                                                         "<<endl<<
      "|Address :"<<address<<"                                                   "<<endl<<
      "|_________________________________________________________________________"<<endl<<
         "|flight Information :                                                     "<<endl<<
      "|12 aug 2011                                                              "<<endl<<
      "|BOING 747                                                                "<<endl<<
      "|_________________________________________________________________________"<<endl<<
      "|Depart :"<<c_loc<<"                                                      "<<endl<<
      "|Arrive :"<<dest<<"                                                       "<<endl<<
      "|*BAGGAGE allowed 40 Kilos                                                "<<endl<<
      "|*contact Airline to Confirm baggage allowance                            "<<endl<<
      "|_________________________________________________________________________"<<endl;

t=t+1;
r=r+1;
  
 }
};

class search
{
public:
void searching()
 {
  cout<<"FOLLOWING ARE THE INTERNATIONAL FLIGHTS AVAILABLE"<<endl;

  for(int i=0;i<5;i++)
 
  {
  
  for(int j=0;j<10;j++)
  
  { 
  
   cout<<"FLIGHT FROM "<<l_destination[i]<<" TO "<<i_destination[j]<<endl;
  }
  }
  }
};
class local: public booking
{
protected:
    int b_seat;
 int e_seat;
 int ch;
 int k;
 int p;
 int option;
 mytime t1;
public:
 void getdata()
 {
  k=0;
  p=0;
  cout<<"In which AIRLINE you want to travel"<<endl<<endl;
  cout<<"1)PIA"<<endl;
  cout<<"2)AIR BLUE"<<endl;
  cout<<"3)ARAB EMIRATES"<<endl;
  cout<<"4)QATAR AIRWAYS"<<endl;
  cout<<"enter your choice"<<endl;;
  cin>>option;
  system ("cls");
  switch(option)
  {
  case 1:
   if (option==1)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO PIA"<<endl;
   break;
  case 2:
   if(option==2)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO AIRBLUE"<<endl;
   break;
  case 3:
   if(option==3)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO ARAB EMIRATES"<<endl;
   break;
  case 4:
   if(option==4)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO QATAR AIRWAYS"<<endl;
   break;
  }
  cout<<setw(40)<<"\nTHESE ARE THE LOCAL PLACES AVAILABLE\n\n\n"<<endl;
  cin.ignore();
  for(int i=0;i<5;i++)
  {
   cout<<l_destination[i]<<endl;
  }
  booking::getdata();
  for(int j=0;j<5;j++)
  {
   if(strcmp(l_destination[j],c_loc)==0)
   {
    k++;
   }
  
  }
  for( int i=0;i<5;i++)
  {
   if(strcmp(l_destination[i],c_loc)==0)
  
   {
   
    p++;
  
   }
  
  }
  if(k==1&&p==1)
  
  {
  
   cout<<" FLIGHT AVAILABLE ON THIS ROUTE"<<endl;
   
   b_seat=30;
  
   e_seat=40;
  
   cout<<"In which class you want to travel?"<<endl;
  
   cout<<"Make your choice"<<endl<<endl;
      
   cout<<"\n\n\n\n\n\n";

  cout<<setw(60)<<"*************************************"<<endl;
        cout<<setw(60)<<"*     Press 1 for buisness class    *"<<endl;
  cout<<setw(60)<<"*     Press 2 for economy class     *"<<endl;
  cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;
  
   cout<<"Enter your choice"<<endl;
  
   cin>>ch;
      
   cout<<endl;
   switch(ch)
  
   {
  
   case 1:
   
    b_seat--;
   
    if(b_seat<=0)
    
     cout<<"SORRY NO SEAT AVAILABLE"<<endl;
   
    else
    
     cout<<"SEAT AVAILABLE"<<endl;
   
    break;
  
   case 2:
   
    e_seat--;
   
    if(e_seat<=0)
    
     cout<<"SORRY NO SEAT AVAILABLE"<<endl;
   
    else
    
     cout<<"SEAT AVAILABLE"<<endl;
   
    break;
  
   }
   t1.getdata();
  
   system("CLS");
   booking::show();
   if(ch==1)
   
   {
   
    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|BUISNESS CLASS                                                           "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Ticket Information:                                                      "<<endl<<
             "|BUISNESS CLASS                                                           "<<endl;

   }
   
   if(ch==2)
   
   {
    
    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|ECONOMY CLASS                                                            "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Ticket Information:                                                      "<<endl<<
             "|ECONOMY CLASS                                                           "<<endl;
   }
    
       cout<<"|Status: confirmed                                                        "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|Status: confirmed                                                        "<<endl;
    t1.show();
  }
  else
  
  {
    cout<<"__________________________________________________________________________"<<endl;
     cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
    cout<<"__________________________________________________________________________"<<endl;
  
  }
}
 };

 class international:public booking

 {

 protected:
  
  int b1_seat;
 
  int e1_seat;
 
  int choice;
 
  int c;
 
  int b;
 
  int v;
 
  char g;
  
     mytime t1;


 public:

 
  void getdata()
 
  {
  
   b=0;
  
   v=0;
   
        cout<<"In which AIRLINE you want to travel"<<endl<<endl;
  cout<<"1)PIA"<<endl;
  cout<<"2)AIR BLUE"<<endl;
  cout<<"3)ARAB EMIRATES"<<endl;
  cout<<"4)QATAR AIRWAYS"<<endl;
  cout<<"enter your choice"<<endl;;
  cin>>option;

  system ("cls");

  switch(option)
  {
  case 1:
   if (option==1)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO PIA"<<endl;
   break;
  case 2:
   if(option==2)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO AIRBLUE"<<endl;
   break;
  case 3:
   if(option==3)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO ARAB EMIRATES"<<endl;
   break;
  case 4:
   if(option==4)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO QATAR AIRWAYS"<<endl;
   break;
  } 
   cout<<"\n\nTHESE ARE THE INTERNATIONAL PLACES AVAILABLE"<<endl<<endl;
   cin.ignore();
  
   for(int i=0;i<10;i++)
  
   {
   
    cout<<i_destination[i]<<endl;
  
   }
  
  
   booking::getdata();
  
   for(int j=0;j<10;j++)
  
   {
  
      
    if(strcmp(i_destination[j],dest)==0)
  
    {
   
     v++;
  
    }
  
   }
   for( int i=0;i<5;i++)
  
   {
  
  
    if(strcmp(l_destination[i],c_loc)==0)
  
  
    {
   
     b++;
  
    }
 
 
   }
   if(b==1&&v==1)
   
   {
   
    cout<<" FLIGHT AVAILABLE ON THIS ROUTE"<<endl;
   
    b1_seat=30;
  
    e1_seat=40;
  
    cout<<"In which class you want to travel?"<<endl;
  
   
    cout<<"Make your choice"<<endl<<endl;
  
  
    cout<<"\n\n\n\n\n\n";

  cout<<setw(60)<<"*************************************"<<endl;
        cout<<setw(60)<<"*     Press 1 for buisness class    *"<<endl;
  cout<<setw(60)<<"*     Press 2 for economy class     *"<<endl;
  cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;
  
  cout<<"Enter your choice"<<endl;
  
  cin>>choice;
      
  cout<<endl;
  
  switch(choice)
  
  {
  
  
  case 1:
  
   b1_seat--;
   
   if(b1_seat<=0)
   
    cout<<"SORRY NO SEAT AVAILABLE"<<endl;
   
   else
   
    cout<<"SEAT AVAILABLE"<<endl;
   
   break;
  
  case 2:
  
   e1_seat--;
   
   if(e1_seat<=0)
   
    cout<<"SORRY NO SEAT AVAILABLE"<<endl;
   
   else
   
    cout<<"SEAT AVAILABLE"<<endl;
   
   break;
  
  }
  
  t1.getdata();

 
 
  system("CLS");
  
  
  booking::show();
  
  if(choice==1)
  
  {
    
    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|BUISNESS CLASS                                                           "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Ticket Information:                                                      "<<endl<<
             "|BUSINESS CLASS                                                           "<<endl;
  
  }
  
  if(choice==2)
  
  {
    
    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|ECONOMY CLASS                                                           "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Ticket Information:                                                      "<<endl<<
             "|ECONOMY CLASS                                                           "<<endl;
  
  }
  
  cout<<"|Status: confirmed                                                        "<<endl;

  ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|Status: confirmed                                                        "<<endl;
      
  t1.show();
   }
   else
   
   {
    cout<<"__________________________________________________________________________"<<endl;
     cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
   cout<<"__________________________________________________________________________"<<endl;
   
   }
}
 };

 class main1

 {
 private:
 
  char f;

  int menu_choice;
 
  char a;
  
 public:

  
void getdata()
{
m:
   cout<<"\n\n\n\n\n\n";
   cout<<setw(60)<<"*************************************"<<endl;
   cout<<setw(60)<<"*        AIRWAYS RESERVATION        *"<<endl;
   cout<<setw(60)<<"*             MAIN MENU             *"<<endl;
   cout<<setw(60)<<"*        ENTER YOUR CHOICE          *"<<endl;
   cout<<setw(60)<<"*   PRESS 1 FOR LOCAL BOOKING       *"<<endl;
   cout<<setw(60)<<"* PRESS 2 FOR INTERNATIONAL BOOKING *"<<endl;
   cout<<setw(60)<<"*   PRESS 3 FOR SEARCH OF FLIGHTS   *"<<endl;
   cout<<setw(60)<<"*       NOW ENTER YOUR CHOICE:      *"<<endl;
   cout<<setw(60)<<"*************************************"<<endl;
  
   cin>>menu_choice;
  
  system("cls");
  
   passenger* p1;
  
   booking b1;
  
   international i1;
  
   local l1;
  
   char back;

  
   switch(menu_choice)
  
   {
  
   case 1:
  

    p1=&l1;
  
    p1->getdata();
  
    cout<<"To Go To Main Menu Press b"<<endl;
  
    cin>>back;
  
  
  
    system("CLS");
  
    if (back=='b')
  
    {
 
     goto m;
  
    }
  
    else
  
    {
 
     cout<<"\n\n\n\n\n\n";
   
     cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
  
    }
  
  
    break;
  
   case 2:
  

    p1=&i1;
  
    p1->getdata();
  
    cout<<"To Go To Main Menu Press b"<<endl;
  
    cin>>back;

  
    system("CLS");
  
    if (back=='b')
  
    {
 
     goto m;
  
    }
  
    else
  
    {
 
     cout<<"\n\n\n\n\n\n";
   
     cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
  
    }
  
    break;
  
   case 3:
  
    search s1;
  
    s1.searching();
  
    cout<<"To Go To Main Menu Press b"<<endl;
  
    cin>>back;

  
  
    system("CLS");
  
    if (back=='b')
  
    {
 
     goto m;
  
    }
  
    else
  
    {
 
     cout<<"\n\n\n\n\n\n";
   
     cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
  
    }
  
    break;
  
}
} 
};
void main()
{ SetConsoleTitle(L"AIRWAYS RESERVATION");
 system("color 5f");
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t     WELCOME TO AIRWAYS RESERVATION SYSTEM";
 delay(2500);
 system ("cls");
 cout<<"\n\n\n\n\n\n\n\t\t          Developed by :";
 delay(500);
  cout<<" Rana Jehanzeb";
  delay(500);
  cout<<"\n\n\n\t\t                         Afraz Ahmad Khan";
 delay(3000);
 system("cls");
 main1 m1;
 m1.getdata();
}