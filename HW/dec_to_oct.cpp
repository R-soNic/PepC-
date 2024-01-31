#include<bits/stdc++.h>
using namespace std;
//decimal to octal
void DecToOct(int n){
    int rem;
    vector<int>arr;
    while(n>=1)
    {
        rem=n%8;
        // cout<<rem<<" ";
        arr.push_back(rem);
        n/=8;
        // cout<<n<<" ";
    }
    
    // cout<<arr.size()<<endl;
    int low=0,high=n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        // cout<<arr[low]<<" "<<arr[high]<<endl;
    }
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i];
    }
}

int main(){
    int n;
    cout<<"Enter the Decimal value"<<endl;
    cin>>n;
    cout<<"The octal value for "<<n<<" is: ";
    DecToOct(n);
    return 0;
}