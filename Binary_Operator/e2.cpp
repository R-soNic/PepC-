#include<bits/stdc++.h>
using namespace std;

class weight{
    int kg;
    public:
    weight(){
        kg=0;
    }
    weight(int k){
        kg=k;
    }
    void display(){
        cout<<kg<<endl;
    }
    weight operator ++(){
        return weight(++kg);
    }
    weight operator ++(int){
        return weight(kg++);
    }
};

int main(){
    weight w(10 );
    w.display();
    ++w;
    w.display();
    return 0;
}