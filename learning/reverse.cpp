#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[n];
    int i=n-1;
    while(i>=0){
        cin>>a[i];
        i--;
    }
for(i=0;i<n;i++){
    cout<<a[i]<<' ';
}
       
    return 0;
}
