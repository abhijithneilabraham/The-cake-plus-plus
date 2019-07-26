#include<iostream>
using namespace std;
int main(){
double x=20;
double y=25;
cout<<"address is "<<&x;
cout<<"\n second address"<<&y;
int sub=&x-&y;
cout<<"\n difference is "<<sub;
}
