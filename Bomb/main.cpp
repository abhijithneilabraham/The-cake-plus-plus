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



for(int i=0;i<10;i++)
{
  cout<<str<<"\n";
  cout<<i;
  usleep(1000000);


}

    return 0;
}
