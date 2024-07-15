// -> in a complete binary tree the root node will always be greater than its child node.

#include<bits/stdc++.h>
using namespace std;

void swapp(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void insertmax(vector<int>arr,int n,int elm){
    int k=n+1;
    arr[k]=elm;
    int i=k;
    while(i>0){
        int parent=i/2;
        if(arr[parent]<arr[i]){
            swapp(arr[parent],arr[i]);
            i=parent;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    insertmax(arr,n,k);
    return 0;
}