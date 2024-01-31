#include<bits/stdc++.h>
using namespace std;

int maxi(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i])
            max=arr[i];
    }
    return max;
}
int mini(int arr[],int n){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i])
            min=arr[i];
    }
    return min;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=mini(arr,n);
    int max=maxi(arr,n);
    cout<<max-min;
    return 0;
}