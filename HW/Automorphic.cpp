#include<bits/stdc++.h>
using namespace std;
// is the number automorphic or not

bool automorphic(int n){
    int sq=n*n;
    // bool flag=false;
    while(n!=0 && sq!=0){
        int x=n%10,y=sq%10;
        if(x!=y)
        {
            return false;
            break;
        }
        n/=10;
        sq/=10;
    }
    return true;

}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter the value: "<<endl;
        cin>>x;
        if(automorphic(x))
            cout<<"Yes, the number is automorphic";
        else   
            cout<<"No, the number is not automorphic";
    }
    return 0;
}