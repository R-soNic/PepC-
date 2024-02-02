// #include<bits/stdc++.h>
// using namespace std;
// void swapp(int &a,int &b){
//     int t=a;
//     a=b;
//     b=t;
// }
// void selection(int arr[],int n){
//     int l=0,i=1;
//     int min=arr[l];
//     while(l<n-1){
//         for(i;i<n;i++){
//             // int i=1;
//             if(arr[i]<min){
//                 swapp(arr[i],min);
//                 l++;
//                 min=arr[l];
//             }
//         }
//         i++;
//         l++;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     selection(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
                min=j;
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    return 0;
}