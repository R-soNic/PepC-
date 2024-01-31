// Armstrong number
#include<bits/stdc++.h>
using namespace std;

int powe(int num,int size){
    int ans=1;
    while(size>0){
        ans*=num;
        size--;
    }
    return ans;
}
bool Armstrong(int n){
    int size=to_string(n).length();
    int temp=n;
    int mul=1,sum=0;
    while(temp>0){
        int rem=temp%10;
        sum+=powe(rem,size);
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
        cout<<"Armstrong number";
    else 
        cout<<"Not an armstrong number";
    return 0;
}