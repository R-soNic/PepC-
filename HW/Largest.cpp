// Largest number in array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6,max;
    // cout<<"Enter the size of array: "<<endl;
    // cin>>n;
    int arr[n]={-1,-2,-3,-4,-5,-6};
    max = arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i])
        max=arr[i];
    }
    cout<<"The largest number is "<<max;
    return 0;
}