#include<bits/stdc++.h>
using namespace std;

class base{
    public:
    int width;
    int height;
    void para(int a,int b){
        width=a;
        height=b;
        cout<<"length: "<<width<<" breadth: "<<height<<endl;
        cout<<"Parameter: "<<(2*(width+height))<<endl;
        
    }
};

class derived:public base{
    public:
    int area(){
        cout<<"Area is: ";
        return (width*height);
    }
};

int main(){
    int a,b;
    cout<<"Enter the values: "<<endl;
    cin>>a>>b;
    derived d;
    d.para(a,b);
    cout<<d.area();
    return 0;
}