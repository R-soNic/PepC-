// templates
// --templates are the features that allows for the creatuin of generic 
// functions and classes
// --these can be used with multiple data types, without the need for 
// explicit casting or overloading
// --templates are defined using the keyword "templates" followed by
// angle brakets (<and>) enclosing the template parameter(s).

#include<bits/stdc++.h>
using namespace std;

template<typename t>
t max(t a,t b, t c){
    t max;
    max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    return max;
}

int main(){
    cout<<max(10,20,30)<<endl;
    cout<<max(6.23,23.8,32.42)<<endl;
    cout<<max('a','z','c');
    return 0;
}