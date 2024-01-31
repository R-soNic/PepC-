//insert element in an array
#include<bits/stdc++.h>
using namespace std;

void insert(int arr[],int n,int x,int pos){
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=x;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element and pos you want to insert "<<endl;
    int x,pos;
    cin>>x>>pos;
    insert(arr,n,x,pos);
    return 0;
}