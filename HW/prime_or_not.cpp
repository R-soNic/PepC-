// check if number is prime or not
#include<bits/stdc++.h>

using namespace std;

// bool isPrime(int n){
//     if(n==1)return true;
//     // if(n==2)return true;
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0)return false;
//     }
//     return true;
// } 

int isPrime(int n){
    int c=0;
    if(n%1==0)return 1;
    if(n%2==0)return 1;
    for(int i=2;i<n;i++){
        if(n%1==0 && n%i==0)
            c++;
    }
    if(c<=1)return 1;
    else return 0;
}

int main(){
    int n;
    cin>>n;
    cout<<isPrime(n);
    return 0;
}