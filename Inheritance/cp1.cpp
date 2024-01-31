#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"A() constructor\n";
    }
    ~A(){
        cout<<"A() Destructor\n";
    }
};
class B{
    public:
    B(){
        cout<<"B()constructor\n";
    }
    ~B(){
        cout<<"B() Destructor\n";
    }
};

class C : public A, public B{
    public:
    C(){
        cout<<"C() constructor\n";
    }
    ~C(){
        cout<<"C() Destructor\n";
    }
};

int main(){
    C c;
    return 0;
}