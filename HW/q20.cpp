#include<bits/stdc++.h>
using namespace std;
// board painting
int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(a*b > c*d && a*b > e*f )
        cout<<"He can fix";
    else 
        cout<<"He can't fix";
    return 0;
}