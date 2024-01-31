//segrigation of 0's and 1's
#include<bits/stdc++.h>
using namespace std;

void swapp(char &a,char &b){
    char t=a;
    a=b;
    b=t;
}
void segrigation(string &s){
    int n=s.length();
    int f=0,ct=1;  // f as an index of first element in array, ct as 
    for(int i=1;i<n;i++){
        if(s[i]==s[f]){
            swapp(s[i],s[ct]);
            ct++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
}
int main(){
    string s;
    cout<<"Enter a binary number: ";
    cin>>s;
    segrigation(s);
    return 0;
}