//STRONG PASSWORD
#include<bits/stdc++.h>
using namespace std;

bool strongpass(string &s,int n){
    int cn1=0,cn2,cn3=0,cn4=0;
    int i=0;
    if(n<8)return false;
    else {
        while(n!=0){
        if(s[i]>=97 && s[i]<=122){
            cn1++;
        }
        if(s[i]>=65 && s[i]<=96)
            cn2++;
        if(s[i]>='0' && s[i]<='9')
            cn3++;
        if(s[i]=='@' || s[i]=='#' || s[i]=='&' || s[i]=='*' || s[i]=='_' || s[i]=='$')
            cn4++;
        i++;
        n--;
    }
    }
    if(cn1==0 || cn2==0 || cn3==0 || cn4==0)
    return false;
    else return true;
}

int main(){
    string s;
    cout<<"Enter the password:"<<endl;
    cin>>s;
    int n=s.length();
    if(strongpass(s,n))
        cout<<"Strong pass";
    else 
        cout<<"Weak pass";
    return 0;
}