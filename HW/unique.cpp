#include<bits/stdc++.h>
using namespace std;

void unique(int l,int r){
    int ct,dt=0;
    for(int i=l;i<=r;i++){
        ct=0;
        for(int j=i;j<=r;j++){
            if(i==j){
                 ct++;
                  if(ct==0)
                    dt++;
            }
        }
    }
    if(dt==0)cout<<"Not a unique no"<<endl;
    else 
        cout<<dt;
}
int main(){
    int l,r;
    cin>>l>>r;
    unique(l,r);
    return 0;
}