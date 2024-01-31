#include<bits/stdc++.h>
using namespace std;

// bank
class bank{
    public:  
    double len;
    double bredth;
    double height;
    
    double getpara(void);
    
    double getvolume(void){
        return len*bredth*height;
    }
        
};

double bank :: getpara(void){
        return 2*len*bredth;
    }

int main(){
      bank b;
      cout<<"Enter the length of the box : ";
      cin>>b.len;
      cin>>b.bredth;
      cin>>b.height;
      cout<<"Volume of box : ";
      cout<<b.getvolume()<<endl;
      cout<<b.getpara()<<endl;
    return 0;
}