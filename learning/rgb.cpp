#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
char rgb1[]={'B', 'G','G','B','R','R'};
int size = sizeof(rgb1)/sizeof(rgb1[0]);
int rgb2[size];

for(int i=0;i<size;i++){
  rgb2[i]=int(rgb1[i]);
}
sort(rgb2,rgb2+size);
for(int j=size-1;j>=0;j--)
{
  cout<<char(rgb2[j]);
}

}
