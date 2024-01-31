#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    int *p;
    p = &a;
    int n=sizeof(int);
    int m=p+n;
    cout<<m;
    return 0;
}