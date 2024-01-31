#include<bits/stdc++.h>
using namespace std;

class cricket{
    public:
    // virtual void specialshot()=0;  // pure virtual function
    virtual void specialshot(){
        cout<<"Special shot"<<endl;
    }
};
class dhoni:public cricket{
    public:
    void specialshot(){
        cout<<"Helicopter shot"<<endl;
    }
};
class virat: public cricket{
    public:
    void specialshot(){
        cout<<"Cover shot"<<endl;
    }
};

int main(){
    virat v;
    dhoni d;
    cricket *c1=&v;
    cricket *c2=&d;
    c1->specialshot();
    c2->specialshot();
    return 0;
}