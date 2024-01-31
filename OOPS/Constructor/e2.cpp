#include<bits/stdc++.h>
using namespace std;

//constructor and destructor

class car{
    
    public:
    
    car(){
        cout<<"This is a constructor of class car."<<endl;
    }
    ~car(){
        cout<<"This is the destructor of class car."<<endl;
    }
};

int main(){
    car c,c1,c2;
    // car d(20);
    // car e(15,20);
    return 0;
}