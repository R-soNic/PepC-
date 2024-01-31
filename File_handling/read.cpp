#include<bits/stdc++.h>
using namespace std;

int main(){
    // string line;
    // ifstream file("data.txt");
    // if(file.is_open()){
    //     while(getline(file,line)){
    //         cout<<line<<"\n";
    //     }
    //     file.close();
    // }else{
    //     cout<<"File not found";
    // }

    ofstream file("data.txt",ios::in);
    if(!file.is_open()){
        cout<<"ERROR";
    }else{
        cout<<file.tellp();
        // cout<<endl;
        file<<"Hi this is a pep class";
        file.seekg(2);
        string s;
        getline(file,s);
        file<<"Hello this is a pep class";
        cout<<s;
    }
    return 0;
}