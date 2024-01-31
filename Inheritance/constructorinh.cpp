#include<bits/stdc++.h>
using namespace std;

class base{
    public:
    base(){
        cout<<"Base Constructor Called"<<endl;
    }
};

class derived: public base{
    public:
    derived(){
        cout<<"Derived default called"<<endl;
    }
    derived(int n){
        cout<<"Derived Parameterized called"<<endl;
    }
};

int main(){
    base b;
    derived d1,d2(5);
    return 0;
}