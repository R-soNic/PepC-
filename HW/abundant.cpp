//ABUNDANT OR NOT

#include<bits/stdc++.h>
using namespace std;

void abundant(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
            sum+=i;
    }
    if(sum>n) 
        cout<<"Abundant"<<endl;
    else
        cout<<"Not an abundant"<<endl;
}
int main(){
    int n;
    cin>>n;
    abundant(n);
    return 0;
}