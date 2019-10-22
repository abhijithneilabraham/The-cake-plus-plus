#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<dos.h>

void main()
{
clrscr();
void play();
play();
getch();
}

void play()
{
int n;
randomize();
int num=random(100);

for(int i=9;i>=0;i--)
{cout<<"\nGUESS THE NUMBER";

    cin>>n;
{


if(n>num)
{
    cout<<"it is too  high";
    if(i!=0)
    cout<<"\nyou have got only"<< " "<<i<<" "<<"chances";
    else
    cout<<"U HAVE NO CHANCES LEFT U LOSE";
 }



else if(n<num)
  {
   cout<<"it is too low";
   if(i!=0)
   cout<<"\nyou have got only"<<" "<<i<<" "<<"chances";
   else
   cout<<"U HAVE NO CHANCES LEFT U LOSE";
  }
else
   {cout<<"kitti machane!!!!";
   cout<<"\nWANNA PLAY AGAIN(y/n)";
 char choice;
 cin>>choice;
 switch (choice)
 {
     case 'y' :      play();
		      break;

     case 'n' :      cout<<"THANK U FOR PLAYIING SEE YOU NEXT TIME";
		       delay(5000);
		       exit(0);
		       getch();
		       break;
     default       :   cout<<"SORRY SOME ERROR PLZZ TRY AGAIN";


}

}

}
}
cout<<"\nWANNA TRY AGAIN????(y/n)";
     char lchoice;
    cin>>lchoice;
    switch (lchoice)
 {
     case 'y' :      play();
		      break;

     case 'n' :      cout<<"THANK U FOR PLAYIING SEE YOU NEXT TIME";

		       delay(5000);
		       exit(0);
		       getch();
		       break;
     default       :   cout<<"SORRY SOME ERROR PLZZ TRY AGAIN";

  }

}


