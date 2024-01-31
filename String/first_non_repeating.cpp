#include<bits/stdc++.h>
using namespace std;

void firstNonrepeating(string &s){
    int size=s.length();
    for(int i=0;i<size;i++){
        int ct=0;
        for(int j=0;j<size;j++){
            if(s[i]==s[j])
            ct++;
        }
        if(ct==1){
            cout<<"The single first string is: "<<s[i];
            break;
        }
    }
}
int main(){
    string s;
    cout<<"Enter the string :"<<endl;
    cin>>s;
    firstNonrepeating(s);
    return 0;
}