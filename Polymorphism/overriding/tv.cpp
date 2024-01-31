#include<bits/stdc++.h>
using namespace std;

class TV{
    public:
    virtual void channel()=0;
};
class parent: public TV{
    public:
    void channel(){
        cout<<"DISCOVERY CHANNEL"<<endl;
    }
};
class child: public TV{
    public:
    void channel(){
        cout<<"POGO"<<endl;
    }
};
int main(){
    parent p;
    child c;
    TV *t1=&p;
    TV *t2=&c;
    
    return 0;
}