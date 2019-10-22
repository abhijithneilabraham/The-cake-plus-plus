#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int arr[]={7,4,1,3,5,2};
    int target=7;
    sort(arr,arr+4);
    int j=0;
    int k;
    int c=0,sum;
  while(j<5 && arr[j]<target){
      sum=0;
      for(k=j+1;k<5;k++){
          sum=arr[j]+arr[k];
          if(sum==target){
              c+=1;
              continue;
          }
      }

      j++;
  }
  if(target==1){
      c=1;
  }
  cout<<c;
}