#include<bits/stdc++.h>
using namespace std;

// void fun(){
//     int a,b;
//     cin>>a>>b;
//     if(a>b)cout<<"A is greater";   //NO ARGUMENT NO RETURN VALUE
//     else cout<<"B is greater";
// }

// int gNum(){
//     int a,b;
    // cin>>a>>b;                     // NO ARGUMENT RETURN VALUE
//     if(a>b){
//         return a;
//     }else return b;
// }

// int gNum(int a,int b){
//     // int a,b;
//     // cin>>a>>b;                  // WITH ARGUMENT WITH RETURN VALUE
//     if(a>b){
//         return a;
//     }else return b;
// }

void gNum(int a,int b){
    // int a,b;
    // cin>>a>>b;                     // WITH ARGUMENT NO RETURN VALUE
    if(a>b){
        cout<<"A is greater";
    }else cout<<"B is greater";
    // return 0;
}

int main(){
    // fun();
    int a,b;
    cin>>a>>b;
    gNum(a,b);
    return 0;
}