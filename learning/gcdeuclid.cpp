#include<iostream>
using namespace std;
int  GCD(int a , int b);
int main(){
cout<<"Greatest common divisor is \n"<<GCD(25,30);
}
int GCD(int a,int b){
  if(b==0){
    return a;
  }
  else
  {
    return GCD(b,a%b);
  }
}
