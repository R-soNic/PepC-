#include<bits/stdc++.h>
using namespace std;
//multi leveled

class wap1{
    public:
    void chat(){
        cout<<"Chatting with bf/gf"<<endl;
    }
};

class wap2:public wap1{
    public:
    void call(){
        cout<<"Voice/video calling"<<endl;
    }
};

class wap3:public wap2{
    public:
    void status(){
        cout<<"Status update"<<endl;
    }
};
int main(){
    wap3 w;
    w.chat();
    w.call();
    w.status();
    return 0;
}