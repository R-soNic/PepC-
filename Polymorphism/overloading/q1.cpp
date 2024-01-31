#include<bits/stdc++.h>
using namespace std;

class Flipkart{
    public:
    void payment(string s){
        cout<<"UPI payment"<<endl;
    }
    void payment(){
        cout<<"COD"<<endl;
    }
    void payment( int s){
        cout<<"Card payment"<<endl;
    }
    void payment(string s,int a){
        cout<<"Net banking"<<endl;
    }
};

int main(){
    Flipkart f;
    f.payment();
    f.payment("Hello@paytm");
    f.payment(1233);
    f.payment("UBI",2115);
    return 0;
}