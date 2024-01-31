#include<bits/stdc++.h>
using namespace std;
// binary operator overloading
class addition{
    public:
    int a,b;
    addition(){
        a=0;
        b=0;
    }
    addition(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
    addition operator +(const addition &obj){  // reference to obj on right hand side
        addition add;
        add.a=a+obj.a;
        add.b=b+obj.b;
        return add;
    }
    addition operator -(const addition &obj){
        addition sub;
        sub.a=a-obj.a;
        sub.b=b-obj.b;
        return sub;
    }
    addition operator *(const addition &obj){
        addition mul;
        mul.a=a*obj.a;
        mul.b=b*obj.b;
        return mul;
    }
};

int main(){
    addition a1(10,30),a2(30,40);
    addition a3=a1+a2;
    addition a4=a1-a2;
    addition a5=a1*a2;
    a3.display();
    a4.display();
    a5.display();
    return 0;
}