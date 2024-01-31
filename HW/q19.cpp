// Armstrong number
#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num==0)return 1;
    return num*fact(num-1);
}
bool Armstrong(int n){
    int size=to_string(n).length();
    int temp=n;
    int mul=1,sum=0;
    while(temp>0){
        int rem=temp%10;
        sum+=fact(rem);
        temp/=10;
    }
    if(sum==n)
        return true;
    else 
        return false;   
}

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    if(Armstrong(n))
        cout<<"Strong number";
    else 
        cout<<"Not a Strong number";

    // int a;
    // cin>>a;
    // cout<<fact(a);
    return 0;
    // int a
}