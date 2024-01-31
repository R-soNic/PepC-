// -- When the preprocessor encounters this directive, it

// #include<bits/stdc++.h>
// using namespace std;

// #define getmax(a,b) ((a)>(b)?(a):(b))
// int main(){
//     int x=5,y;
//     y=getmax(x,2);
//     cout<<y<<endl;
//     cout<<getmax(7,x)<<endl;
//     return 0;
// }

// -- ifdef
// #include<bits/stdc++.h>
// using namespace std;
// #define Num 13
// // #define pi 3.14
// int main(){
//     #ifdef pi
//         cout<<"PI valive"<<pi<<endl;
//     #elif defined(Num)
//         cout<<"Num is:"<<Num<<endl;
//     #else   
//         cout<<"Not Defined"<<endl;
//     #endif
//     return 0;
// }

// PREDEFINED MACRO NAMES
/*
    __LINE__ --Contains the current line number of the program when compiled.
    __FILE__ - Contains the current file name of the program when compiled.
    __DATE__ - Contains a string of the form month/day/year is the date of the
                source file into object code.
    __TIME__ - Contains the string of the form hour:min:sec that is the time at
                which the program was compiled
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"C++ compiler version: "<<__cplusplus<<endl;
    cout<<"Date: "<<__DATE__<<endl;
    cout<<"Line: "<<__LINE__<<endl;
    cout<<"File name: "<<__FILE__<<endl;
    cout<<"Time: "<<__TIME__<<endl;
    return 0;
}