/*
#include<bits/stdc++.h>
using namespace std;

namespace ns1{
    int val=100;
}
namespace ns1{
    void fun(){
        cout<<val;
    }
}
int main(){
    ns1::fun();
    return 0;
}
*/

// Discontiguous Namespaces
// -- We can define namesoaces in various program parts that can even be spread
// over multiple files in known as a Discontiguous namespace
// -- The entire namespace is considered as the sum of its separately defined 
// parts

// Nested namespaces
// -- It means we can create namespaces inside the scope of another namespace.
/*
namespace outer_ps{
    namespace inner_ps{

    }
}

To access:

    outer_ps::inner_ps::inner_ps_member_name;

*/
#include<bits/stdc++.h>
using namespace std;
namespace ot{
    int size=5;
    int arr[5]={11,12,13,14,15};
    namespace ins{
        void print(int arr[],int size){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        }
    }
    void print1(){
        ins::print(arr,size);
    }
}
int main(){
    int num[]={1,2,3};
    ot::ins::print(num,3);
    cout<<endl;
    ot::print1();
    return 0;
}
