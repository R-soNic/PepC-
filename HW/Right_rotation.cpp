#include<bits/stdc++.h>
using namespace std;

string rotate(string &s,int l,int h){
    while(l<h){
        char temp=s[l];
        s[l]=s[h];
        s[h]=temp;
        l++;
        h--;
    }
    return s;
}
void right(string &s,int k){
    int n=s.length();
    int n1=n-1;
    // cout<<"len="<<n<<endl;
    int l=0,h=n1-k-1; //for 0 index to perticular index or rotations
    int l1=n1-k,h1=n-1; // for kth position to last index;
    int l2=0,h2=n-2; // for 0 index to n-2th index;
// cout<<l<<" "<<h<<endl<<l1<<" "<<h1<<endl<<l2<<" "<<h2<<endl;
    // while(l<h){
    //     char temp=s[l];
    //     s[l]=s[h];
    //     s[h]=temp;
    //     l++;
    //     h--;
    // }
    rotate(s,l,h);
    // cout<<"The string is"<<s<<endl;
    // while(l1<h1){
    //     char temp=s[l1];
    //     s[l1]=s[h1];
    //     s[h1]=temp;
    //     l1++;
    //     h1--;
    // }
    rotate(s,l1,h1);
    // cout<<"The string is"<<s<<endl;
    // while(l2<h2){
    //     char temp=s[l2];
    //     s[l2]=s[h2];
    //     s[h2]=temp;
    //     l2++;
    //     h2--;
    // }
    rotate(s,l2,h2);
    // for(int i=0;i<n;i++){
    //     cout<<s[i]<<" ";
    // }
    cout<<"The string is: "<<s<<endl;
}
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    int n=s.length();
    int k;
    cout<<"Enter the no of rotation:"<<endl;
    cin>>k;
    k%=n;
    // cout<<"rotation:"<<k;
    cout<<"original string:"<<s<<endl;
    cout<<"After roation ";
    right(s,k);
    return 0;
}