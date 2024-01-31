//DIGIT SUM
#include<bits/stdc++.h>
using namespace std;

void digsum(int n){
    int ct=0;
    int sum=0;
    while(n>0){
        ct++;
        int rem=n%10;
        sum+=rem;
        n/=10;
    }
    if(ct==1)
        cout<<sum;
    else   
        digsum(sum);
}
// sum of digits of a number
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"The sum is: ";
    digsum(n);

    int ans=0;
    int rem=0;
    while(n>9){
        while(n>0){
            rem=n%10;
            ans+=rem;
            n/=10;
        }
        n=ans;
        ans=0;
    }
    cout<<"The sum is: "<<n;
    return 0;
}