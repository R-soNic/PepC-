#include<bits/stdc++.h>
using namespace std;

class OTT{
    public:
    virtual void surface()=0;
};
class hotsstar: public OTT{
    public:
        void surface(){
            cout<<"This is Hotsstar"<<endl;
        }
};
class Jiocinema: public OTT{
    public:
        void surface(){
            cout<<"This is Jiocinema"<<endl;
        }
};
class Netflix: public OTT{
    public:
        void surface(){
            cout<<"This is Netflix"<<endl;
        }
};

int main(){
    hotsstar h;
    Netflix n;
    Jiocinema j;
    OTT *a=new hotsstar,*b=new Netflix,*c=new Jiocinema;     //pointer of base class should store the address of object of derived class
    // OTT *b=&n;
    // OTT *c=&j;
    a->surface();
    b->surface();
    c->surface();
    return 0;
}