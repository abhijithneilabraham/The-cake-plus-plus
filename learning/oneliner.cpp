#include<iostream>
using namespace std;
int main(){
   int n,i=0;
   cin>>n;
   int *a= new int [n];
    while(!cin.eof()>>a[i++]);
    for(int j=0;j<=3;j++)
    {
        cout<<a[j];
    }
return 0;
}