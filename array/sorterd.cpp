// find if array is sorted or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,3,9,6,8};
    int flag=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            // cout<<arr[i]<<" ";
            // cout<<"array is not sorted"<<" ";
            flag++;
        }
    }
    if(flag==n)cout<<"sorted";
    else cout<<"Not sorted";
    return 0;
}