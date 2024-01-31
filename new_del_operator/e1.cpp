#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    virtual void demo()=0;
};
class B:public A{
    public:
    void demo(){
        cout<<"Demo of B"<<endl;
    }
};
int main(){
    A *a=new B;
    a->demo();
    B b;
    // b.demo();
    return 0;
}