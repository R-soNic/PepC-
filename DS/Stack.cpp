#include<bits/stdc++.h>
using namespace std;

void push(int stack1[],int x,int n,int top){
        if(top==n-1){
            cout<<"Stack overflow condition";
        }
        else{
            top =top+1;
            stack1[top]=x;    
        }
}
bool isEmpty(){
    if(top==-1)
        return true;
    else 
        return false;
}

void pop(int stack1[],int n,int top){
    if(isEmpty())
        cout<<"Stack underflow condition!"<<endl;
    else
        top=top-1;
}

int topElement(){
    return stack1[top];
}
int size(){
    return top+1;
}

int main(){
    int stack1[3];
    int top=sizeof(stack1);
    push(stack1,5,3);
    cout<<"Current size of stack is "<<size()<<endl;
    push(stack1,10,3,top);
    push(stack1,15,3,top);
    cout<<"current size of stack is "<<size()<<endl;
    push(stack1,20,3,top);
    cout<<"The current top element of stack is "<<topElement(stack1)<<endl;
    for(int i=0;i<3;i++)
        pop();
    cout<<"Current size of stack is "<<size()<<endl;
    pop();
    return 0;
}