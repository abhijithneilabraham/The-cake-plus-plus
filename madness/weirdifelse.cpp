#include<iostream>
using namespace std;
int main()
{
  //I dont loop,I do if else and goto to just make your code reading nightmare
int i=1;
label1: cout<<"hai\n";
i=i+1;
if(i<20){
  cout<<"bye\n";
  goto label1;
}
else{
  cout<<"finished";
}
}
