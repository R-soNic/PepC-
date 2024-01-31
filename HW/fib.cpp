//fibbonachi series;

#include<bits/stdc++.h>
using namespace std;

void fib(int n){
    // int sum=0;
    long int n1=1,n2=2,n3;
    for(int i=1;i<=n;i++){
        cout<<n1<<" ";
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
}
int main(){
    int n;
    cin>>n;
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum+=i;
    //     cout<<sum<<" ";
    // }
    fib(n);
    return 0;
}