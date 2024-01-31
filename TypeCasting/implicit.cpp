// static const_cast
// --capable enough that can perform all the conversions carried out by the implicit cast.
// --compilt time casting

// syntax: 
// static_cast<new_data_type>(expression);

//-------------------------------------------------------------------

// Reinterpret casting
//--------------------------------------------------------------------
//const casting
// -- the const_cast is used to change or manipulate the const behaviour 
// of the source pointer
// -- it means we can perform the const in two ways:
// -- setting a const pointer to a non-const pointer or deleting the const
// from  a const pointer.

// syntax:
// --const_cast<new data_tyoe>(expression):
//----------------------------------------------------------------------
//Dynamic casting
// --Dynamic casting is a runtime cast operator used to perform conversion
// of one type of variable to another only on class pointers and references
// --it means it check the valid casting of the variable at the runtime ,
// and if the casting fails, it returns a null value.
// syntax;
// -- dyanmic_cast<new_data_type>(expression):

#include<bits/stdc++.h>
using namespace std;

class base{
    virtual void message()=0;
};
class derived:public base{
    void message() override{
        cout<<"Derived class";
    }
};

int main(){
    // int a=10;
    // char b='A';
    // int c=a+b;
    // cout<<c;
    // float a=3.0;
    // int b=1;
    // float c=a+b;
    // cout<<c;
    // cout<<;
    // float mul=3.4*2.1;
    // cout<<mul<<endl;
    // int ans=static_cast<int>(mul);  //static type casting
    // cout<<ans;

    // int *ptr=new int(65);
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // char *ch=reinterpret_cast<char*>(ptr);  // reinterpret type casting
    // // cout<<*ch<<endl;
    // cout<<ch;

    //--Const cast
    // const int constval=45;
    // int *mulptr=const_cast<int *>(&constval);
    // *mulptr=54;
    // cout<<constval<<endl;    
    // cout<<*mulptr<<endl;
    // cout<<constval<<endl;

    // --Dynamic Casting
    // base *ptr=new derived;
    // derived *dp=dynamic_cast<derived*>(ptr);
    // if(dp!=nullptr){
    //     cout<<"Dynamic casting is done successfully";
    // }else
    //     cout<<"Dynamic casting failed";
    // delete ptr;

    derived d1;
    base *bp=dynamic_cast<base*>(&d1);
    derived *dp1=dynamic_cast<derived*>(bp);
    if(dp1!=nullptr)
        cout<<"Not NULL\n";
    else   
        cout<<"NULL";
    try{
        derived &r1=dynamic_cast<derived &>(*bp);
        cout<<"Dyanamic cast Syccessful for reference";
    }catch(bad_cast& ex){
        cout<<"Dynamic cast Failed for reference";
    }
    return 0;
}