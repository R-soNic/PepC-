#include<bits/stdc++.h>
using namespace std;

struct student{
    int rollno;
    char name[20];
    int m1,m2,m3;
    float avg;
};

int main(){
    student s[3];
    for(int i=0;i<3;i++){
        cout<<"Enter roll no"<<endl;
        cin>>s[i].rollno;
        cout<<"Roll no: "<<s[i].rollno<<endl;
        cout<<"Enter name: ";
        cin>>s[i].name;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Enter the marks: ";
        cin>>s[i].m1>>s[i].m2>>s[i].m3;
        cout<<"Enterd marks are: "<<s[i].m1<<s[i].m2<<s[i].m3<<endl;
        s[i].avg = (s[i].m1 + s[i].m2+s[i].m3)/3;
        cout<<"Average is:"<<s[i].avg<<endl;
    }
    return 0;
}