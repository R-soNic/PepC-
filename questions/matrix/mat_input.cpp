#include<bits/stdc++.h>
using namespace std;

int max(int arr[],int n){
    // int ;
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i])
        max=arr[i];
    }
    return max;
}
int main(){
    int n,m;
    cout<<"Enter the dimensions for matrix:"<<endl;
    cin>>n>>m;
    int arr[n][m];
    // cout<<"Enter the elements for matrix:"<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){                    // INPUT for MATRIX
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<"The matrix is:"<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         // if(i==n-1|| j==0 || j==m-1||i==0)  // MATRIX PRINT
    //             cout<<arr[i][j]<<" ";
    //         // else 
    //         //     cout<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<"The Border pattern :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==n-1|| j==0 || j==m-1||i==0)  // BORDER
                cout<<"*";
            else 
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<"The X pattern :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j || j==(n-1-i))  // X PATTERN DIAGONAL
                cout<<"*";
            else 
                cout<<" ";
        }
        cout<<endl;
    }
    // cout<<"The max in each row:"<<endl;
    // for(int i=0;i<n;i++){
    //     int maxi=0;
    //     for(int j=0;j<m;j++){
    //         maxi=max(arr[i],n);         // max element in each row
    //     }
    //     cout<<maxi;
    //     cout<<endl;
    // }
    // cout<<"The sum of diagonals:"<<endl;
    // int sum1=0,sum2=0;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(i==j)                     // DIAGONAL SUM;
    //             sum1+=arr[i][j];
    //         if(j==(n-1-i))
    //             sum2+=arr[i][j];
    //     }
    // }
    // cout<<"The diagonal1 sum is: "<<sum1<<endl;
    // cout<<"The diagonal2 sum is: "<<sum2<<endl;

    // cout<<"The difference of diagonals is:"<<sum1-sum2<<endl;
    
    // cout<<"SPIRAL PATTERN"<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(i==0 || (j==0 && i>=n/2+1) || i==n-1||j==m-1 || (i==n/2 && j<=m/2))
    //             cout<<"*";
    //         else 
    //             cout<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<"TRIANGLE PATTERN"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j || j==0|| i==n-1)
                cout<<"*";
            else 
                cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}