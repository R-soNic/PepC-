// Decimal to binary

#include<bits/stdc++.h>
using namespace std;

void DtoB(int n){
    if(n==0) cout<<0;
    vector<int>arr;
    int r;
    while(n>=1){
        r=n%2;
        arr.push_back(r);  
        n/=2; 
    }
    int low=0,high=arr.size()-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    cout<<endl;
    // return 0;
}
int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    cout<<"\nBinary representation of "<<n<<" is :";
    DtoB(n);
    return 0;
}