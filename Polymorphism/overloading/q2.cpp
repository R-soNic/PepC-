#include<bits/stdc++.h>
using namespace std;
// facebook login

class facebook{
    public:
    void login(long int num,string pass){
        cout<<"Log in using mobile number: "<<num<<endl;
    }
    void login(string s,string pass){
        cout<<"Login using email "<<s<<endl;
    }
};

int main(){
    facebook f;
    f.login(748818795,"Passq32");
    f.login("heelo@gmail.com","Passq32");
    return 0;
}

