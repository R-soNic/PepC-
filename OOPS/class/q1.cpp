#include<bits/stdc++.h>
using namespace std;

// bank
class bank{
    public:  
        int accountNO=300388;
        string branch="LPU";
        int balance;

    void withdrawl(){
        cout<<"Enter the amount to be withdrawn : ";
        int a;
        cin>>a;
        int rm=balance-a;
        cout<<"Amount balance "<<rm<<endl;
    }
    void deposit(){
        cout<<"Enter the amount to be Deposited: "<<endl;
        int a;
        cin>>a;
        int rm=balance+a;
        cout<<"Amount balance "<<rm<<endl;
    }
};

int main(){
    bank d;  
    cout<<d.accountNO<<endl;
    cin>>d.balance;
    cout<<d.balance<<endl;
    cout<<d.branch<<endl; 
    d.withdrawl();
    d.deposit();     
    return 0;
}