#include<bits/stdc++.h>
using namespace std;

class demo{
    public:  // access specifier
        int a=10;                        // data member
    
    void display(){
        cout<<"Executing display"<<endl; //member funtion
    }
};

int main(){
    demo d;           // creating an object for class  and d is instance of a class
    cout<<d.a<<endl;  // calling data member from the class
    d.display();      // calling member funtion from the class
    return 0;
}