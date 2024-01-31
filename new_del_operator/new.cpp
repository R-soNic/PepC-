#include<bits/stdc++.h>
using namespace std;

int main(){
    double *p=NULL;
    p=new double;
    *p=3.14;
    cout<<"The value for p is: "<<*p<<endl;
    delete p;
    return 0;
}