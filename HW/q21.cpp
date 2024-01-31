#include<bits/stdc++.h>
using namespace std;

class facebook{
    public:
    virtual void reaction(){
        cout<<"Like"<<endl;
    }
};
class facebooknew: public facebook{
    public:
    void reaction(){
        cout<<"like sad angry love haha"<<endl;
    }
};

int main(){
    // facebooknew fv;   
    facebook *f=new facebooknew,s;
    // s.reaction();
    f->reaction();
    return 0;
}