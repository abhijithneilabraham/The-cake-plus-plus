#include <iostream>
#include<windows.h>

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
  Sleep(1000);


}

    return 0;
}
