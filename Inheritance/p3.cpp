#include<bits/stdc++.h>
using namespace std;
//multi leveled

class vehicle{
    public:
    int speed;
    void veh(int n){
        speed=n;
        if(n>60)
        cout<<"Stop"<<endl;
    }
};

class fare{
    public:
    void price(){
        cout<<"Depends on destination"<<endl;
    }
};

class car:public vehicle{
    public:
    void model(){
        cout<<"Choose good"<<endl;
    }
};

class bus:public vehicle,public fare{
    public:
    void stops(){
        cout<<"Destination"<<endl;
    }
};

int main(){
    int n;
    cin>>n;
    bus b;
    car c;
    b.price();
    b.stops();
    b.veh(n);

    c.model();
    c.veh(n);
    return 0;
}