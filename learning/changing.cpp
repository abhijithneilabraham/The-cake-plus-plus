#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b, int c, int d){
    int e[4]={a,b,c,d};
    sort(e,e+4);
    return e[3];

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

