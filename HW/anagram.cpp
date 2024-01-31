#include<bits/stdc++.h>
using namespace std;
// given strings are anagram or not
void anagram(string &s1,string &s2){
    int n1 = s1.length();
    // cout<<n1;
    int n2=s2.length();
    // cout<<n2;
    int ct=0;
    if(n1!=n2)cout<<"-1";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(s1[i]==s2[j])
            ct++;
        }
    }
    cout<<ct<<endl;
    if(ct==n1)cout<<"Anagram";
    else cout<<"not an anagram";
}
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    anagram(s1,s2);
    return 0;
}