#include<bits/stdc++.h>
using namespace std;
// Polymorphism compile time : funtion overloading
class demo{
    public:
    // void eat(int a){
    //     cout<<"Parameter  as integer"<<endl;
    // }
    void eat(string a){
        cout<<a<<endl;
    }
    void eat(float a){
        cout<<a<<endl;
    }
    void eat( int a,int b){
        cout<<a<<" "<<b<<endl;
    }
    void eat(int a,int b,int c){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    void eat(int a...){
        cout<<a<<endl;
    }
    void eat(int a, string s){
        cout<<a<<" "<<s<<endl;
    }
    void eat(string s,int a){
        cout<<s<<" "<<a<<endl;
    }
};

int main(){
    demo d;
    d.eat(10);
    d.eat("Hello");
    d.eat(2.22f);
    d.eat(10,20);
    d.eat(10,20,30);
    d.eat(10,"hello");
    d.eat("Hello",10);
    return 0;
}