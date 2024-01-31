
#include<bits/stdc++.h>
using namespace std;

void harshad(int n){
    int sum=0;
    int temp=n;
    while(temp>0){
        int rem=temp%10;
        cout<<rem<<" ";
        sum+=rem;
        temp/=10;
        cout<<endl;
    }
    cout<<sum<<endl;
    if(n%sum==0)
        cout<<"Harshad no"<<endl;
    else 
        cout<<"Not a Harshad no";
}
int main(){
    int n;
    cin>>n;
    harshad(n);
    return 0;
}