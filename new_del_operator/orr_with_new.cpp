#include<bits/stdc++.h>
using namespace std;

class shapes{
    public:
    virtual void area(int a,int b)=0;
};
class triangle:public shapes{
    public:
    void area(int h,int b){
        int area=(b*h)/2;
        cout<<"Area of triangle: "<<area<<endl;
    }
};
class rectangle:public shapes{
    public:
    void area(int l,int b){
        int area=l*b;
        cout<<"Area of rectangle: "<<area<<endl;
    }
};
int main(){
    // triangle t;
    // rectangle r;
    shapes *s=new triangle;
    shapes *s1=new rectangle;
    s->area(2,3);
    s1->area(2,3);
    return 0;
}