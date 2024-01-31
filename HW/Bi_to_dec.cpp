// binary to Decimal 

#include<bits/stdc++.h>
using namespace std;

void BtoD(string &n){
    int i=0,left=0,size=n.length(),right=size-1;
    int ans=0;
    while(left<right){
        int temp=n[left];
        n[left]=n[right];
        n[right] =temp;
        left++;
        right--;
    }
    for(int j=0;j<size;j++){
        if(n[j]=='1'){
            ans+=(pow(2,j));
            // cout<<ans<<" ";
        }
    }
    cout<<ans;
}
int main(){
    string  n;
    cout<<"Enter a Binary number: ";
    cin>>n;
    cout<<"\nDecimal representation of "<<n<<" is : ";
    BtoD(n);
    return 0;
}