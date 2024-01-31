#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int rollno;
    int roll(int n){
        rollno=n;

    }
};

class test:public student{
    public:
    int marks1,marks2;
    int marks(int m1,int m2){

    }
};

class result:public test{
    public:
    int total;
    int  res(int t){
        total=t;

    }
};
int main(){
    wap3 w;
    w.chat();
    w.call();
    w.status();
    return 0;
}