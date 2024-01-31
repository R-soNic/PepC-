//delete element in an array
#include<bits/stdc++.h>
using namespace std;

void delet(int arr[],int n,int x){
    int index;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            index=i;
            break;
        }
    }
    for(int i=index;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to delete "<<endl;
    int x;
    cin>>x;
    delet(arr,n,x);
    return 0;
}