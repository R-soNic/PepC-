#include<bits/stdc++.h>
using namespace std;

class car{
    
    public:
    int speed;
    int milage;
    car(){      
                          // Default constructor
        cout<<"Car is created"<<endl;   
        speed=60;
        cout<<speed<<endl;
    }
    car(int x){                        // parameterised constructor
        cout<<"Car is created"<<endl;   
        speed=x;
        cout<<speed<<endl;
    }
    car(int x,int y){                        
        cout<<"Car is created"<<endl;   
        speed=x;
        milage=y;
        cout<<speed<<" "<<milage<<endl;
    }
    car (const &copy){
        
    }
};

int main(){
    car c;
    car d(20);
    car e(15,20);
    return 0;
}