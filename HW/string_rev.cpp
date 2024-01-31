// string rev word rev

#include<bits/stdc++.h>
using namespace std;

void stringrev(string &s){
    int n = s.length();
    int l=0,h=n-1;
    while(l<h){
        char temp=s[l];
        s[l]=s[h];
        s[h]=temp;
        l++;
        h--;
    }
    cout<<"The reverse string is: ";
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
}
int main(){
    string s;
    getline(cin,s);
    stringrev(s);
    return 0;
}