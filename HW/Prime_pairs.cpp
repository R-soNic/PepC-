#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1)return false;
    if(n<=3)return true;

    if(n%2==0 || n%3==0)return false;

    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }

    }
    return true;
}
void primePairs(int n,int m){
    vector<int>arr;
    for(int i=n;i<=m;i++){
        if(isprime(i))
           arr.push_back(i); 
    }
    int ct=0;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
        for(int j=0;j<arr.size();j++){
            if(arr[j]-arr[i]==6)
                ct++;
        }
    }
    cout<<"The count is: "<<ct<<endl;;
}
int main(){
    int n,m;
    cin>>n>>m;
    // cout<<isprime(n);
    primePairs(n,m);
    return 0;
}