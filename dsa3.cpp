
//Using Arrays
#include <iostream>
using namespace std;

int MAXSIZE = 10;
int stack[10];
int top = -1;


bool isFull(){
    return top==MAXSIZE-1;
}
bool isEmpty(){
    return top==-1;
}
void push(int a){
    if(!isFull()){
        top = top+1;
        stack[top]=a;
    }
    else
        cout<<"Stack Overflow"<<endl;
}
void tops(){
    cout<<stack[top]<<endl;
}
void display(){
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
void pop(){
    if(!isEmpty())
        top=top-1;
    else
        cout<<"Stack isEmpty"<<endl;
}


int main()
{
    
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    display();
    tops();
    
    display();
    

    return 0;
}
© 2021 GitHub, Inc.
Terms
