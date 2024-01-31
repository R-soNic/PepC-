// lower to higher and higher to lower
#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[50];
    cin.getline(s,50);
    int n = strlen(s);
    // for (int i=0;i<n;i++){
    //     if(s[i]>=97 && s[i]<=122){
    //         s[i]=s[i]-32;
    //         cout<<s[i];
    //     }
    // }
    cout<<endl;
    for (int i=0;i<n;i++){
        if(s[i]<=96 && s[i]>=65){
            s[i]=s[i]+32;
            cout<<s[i];
        }
    }
    return 0;
}