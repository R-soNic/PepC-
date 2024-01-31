#include<bits/stdc++.h>
using namespace std;
//multiple inheritance 

class A{
    public:
        void base(){
            cout<<"Base() fun..."<<endl;
        }
};

class B{
    public:
        void base1(){
            cout<<"Base1() fun..."<<endl;
        }
};

class C:public A,public B{
    public:
        void base2(){
            cout<<"Base2() fun..."<<endl;
        }
};

int main(){
    C c;
    c.base();
    c.base1();
    c.base2();
    return 0;
}