#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Start"<<endl;
    int a=10,b=0;
    try{
        // if(b==0)
        //     throw "divide by zero error\n";
        if(b==0){
            throw runtime_error("Divide by zero");
        } 
        // if(b==0){
        //     throw 1;
        // }
        cout<<a/b<<endl;
    }catch(runtime_error(error)){
        cerr<<"Exception occured...."<<endl;
        cout<<error.what()<<endl;
    }
    catch(const char* e){
        cerr<<"Exception occured...as an error in try: "<<e<<endl;
    }catch(int a){
        cerr<<"Exception occured...as an int: "<<a<<endl;
    }catch(...){
        cerr<<"Exception occured..."<<endl;
    }
    cout<<"End\n";
    return 0;
}