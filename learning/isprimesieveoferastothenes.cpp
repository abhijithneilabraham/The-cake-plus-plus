#include<iostream>
using namespace std;
int sieve(int n)
{
  bool isprime[n+1];
  for(int i=2;i<n;i++){
    isprime[i]=true;
  }
  isprime[0]=false;
  isprime[1]=false;
  for(int i=2;i<n;i++){
    if(isprime[i]==true){

      for(int j=i*i;j<=n;j+=i){
          isprime[j]=false;

      }
    }
  }
  for(int k=0;k<n;k++){
    if(isprime[k]==true){
      cout<<"\n prime number \n \t"<<k;
    }
  }
}
int sieve(int n);
int main(){
  cout<<"prime numbers less than\n"<<sieve(20);
}
