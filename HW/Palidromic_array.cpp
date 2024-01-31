#include<bits/stdc++.h>
using namespace std;
void ispalin(int arr[],int n){
    int l=0,r=n-1;
    int flag=true;
    while(l<r){
        if(arr[l]!=arr[r])
            flag=false;
        l++;
        r--;
    }
    if(flag==true){
        cout<<"Palindromic array"<<endl;
    }
    else   
        cout<<"Not palindromic array"<<endl;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ispalin(arr,n);
    return 0;
}