#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream obj("data.txt",ios::binary);
    if(!obj.is_open())
        cout<<"File not found";
    else{
        obj<<"Writing data to file...\n";
        obj<<"Winter pep......\n";
        obj.close();
        cout<<"Successful\n";
    }
    cout<<"The data inside file is:\n";
    // ifstream ibj;
    // ibj.read(obj);
    return 0;
}