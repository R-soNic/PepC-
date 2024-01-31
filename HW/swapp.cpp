#include<bits/stdc++.h>
using namespace std;
// swap 2 numbers different methods
void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
    // cout<<a<<" "<<b<<endl;
}
// void swap(int &a,int &b){
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     // cout<<a<<" "<<b;
// }

// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
int main(){
    int a,b;
    cin>>a>>b;
    // cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}