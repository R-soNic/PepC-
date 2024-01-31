#include<bits/stdc++.h>
using namespace std;
// palindorme or not
bool isPalindrome(string s){
    int l = 0, r = s.length() -1;
    while(l<r){
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    // return (a:b)?true:false;
    return true;
}

int main(){
    string str ;
    cout<<"Enter the string:"<<endl;
    cin>>str;
    if(isPalindrome(str))cout<<"ispalindrome";
    else cout<<"Is not";
    return 0;
}