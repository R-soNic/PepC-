#include<bits/stdc++.h>
using namespace std;
//single level inheritance
class base{
    public:
    void b(){
        cout<<"Base class";
    }
};
class derived :public base {
};

class ig1{
    public:
    void iold(){
        cout<<"Old"<<endl;
    }
};
class ig2: public ig1{
    public :
    void inew(){
        iold();
        cout << "New"<<endl;
        // iold();
    }
};

int main(){
    // derived d;
    // d.b();
    // cout<<endl;
    ig1 i;
    // i.iold();
    cout<<endl;
    ig2 j;
    // j.iold();
    j.inew();
    return 0;
}
