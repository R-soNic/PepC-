// Smallest number in array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6,min;
    // cout<<"Enter the size of array: "<<endl;
    // cin>>n;
    int arr[n]={1, 4, 9, 3, 8,7};
    min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    cout<<"The largest number is "<<min;
    return 0;
}