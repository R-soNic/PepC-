#include<bits/stdc++.h>
using namespace std;
// remove the continious vowels
int main(){
    char s[50];
    cin.getline(s,50);
    int n = strlen(s);
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='i'||s[i]=='e' ||s[i]=='o'||s[i]=='u'){
            if(s[i+1]=='a' ||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')
                cout<<"";
        }
        else 
            cout<<s[i];
    }
    return 0;
}