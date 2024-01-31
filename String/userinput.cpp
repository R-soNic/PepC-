#include<bits/stdc++.h>
using namespace std;

int main(){
    // cout<<"Using array to take input"<<endl;
    // char c[10];
    // cin.getline(c,10);
    // cout<<"First word : "<<c<<endl;
    cout<<"Using string to take input"<<endl;
    // string s,b;
    char s[50],b[50];
    cin.getline(s,50);
    cin.getline(b,50);
    // getline(cin,s);
    // strcpy(b,s); //copy string 
    strcat(b,s); //concatination of two string
    cout<<"Concatenated String is: "<<b;
    // cout<<"Second word : "<<s<<endl;
    // cout<<"len of s: "<<strlen(s)<<endl; //length of string
    // // cout<<"The length of s is "<<s.length()<<endl;
    // // cout<<"the capacity of s is "<<s.capacity()<<endl;
    // cout<<"The copied string is : "<<b<<endl;
    // if(strcmp(b,s)==0)
    //     cout<<"same";
    // else 
    //     cout<<"Not same";
    return 0;
}