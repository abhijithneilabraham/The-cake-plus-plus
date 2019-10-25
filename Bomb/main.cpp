#include <iostream>
#include<chrono>
#include <unistd.h>

// nanoseconds, system_clock, seconds

  using namespace std;


int main()
{
  char str[100];
    cout << "Enter some bad words" << endl;
    gets(str);



for(int j=0;j<10;j++)
{
  cout<<str<<"\n";
  cout<<j;
  usleep(1000000); //usleep sets timer
cout << '\a'; // this command makes a beep sound! interesting

}

    return 0;

}
