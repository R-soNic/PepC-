#include<bits/stdc++.h>
using namespace std;

int binary(int arr[],int n,int k){
    int l=0,h=n-1,mid;
    while(l<=h){
        mid=(l+h)/2;
        if(arr[mid]==k){
            // cout<<"Pos is: ";
            return mid+1;
        }
            
        if(k>arr[mid]){
            l=mid+1;
            // return l;
        }
        if(k<arr[mid]){
            h=mid;
            // return right;
        }
        // if(l>h)
        //     break;
    }
    // cout<<ans;
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cout<<"Enter the elemnt in array: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the no you want to find: "<<endl;
    cin>>k;
    int ans=binary(arr,n,k);
    if(ans!=-1){
        cout<<"Elm found at pos: "<<ans;
    }else
        cout<<"Elm not found";
    return 0;
}