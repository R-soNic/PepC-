#include<bits/stdc++.h>
using namespace std;

class consOver{
    public:
    float area;
    consOver(){
        cout<<"Default constructor called\n";
        area=0;
        cout<<area;
    }
    consOver(int a,int b){
        cout<<"Parameterized constructor called\n";
        area=a*b;
        cout<<area;
    }
    void display(){
        cout<<"area is :"<<area;
    }
};

int main(){
    consOver c;
    // c.display();
    cout<<endl;
    consOver c1(10,20);
    // c1.display();
    return 0;
}