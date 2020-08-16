//implementation using array
#include <iostream>
# define MAX 100
using namespace std;
int top = -1;
int a[MAX];
void print(){
    cout<<"Stack:"<<endl;
    for(int i=0;i<=top;i++){        
        cout<<a[i]<<endl;
    }
    return;
}
void push(int x){
    if(top==MAX-1){
        cout<<"Error: stack overflow"<<endl;
        return;
    }
    top++;
    a[top]=x;
    return;

}
void pop(){
    if(top==-1){
        cout<<"There is no element to pop"<<endl;
        return;
    }
    top--;
    return;    
}
void display(){
    cout<<a[top];
}

int main(){
    push(2);
    push(3);
    push(4);
    print();
    pop();
    display();
    print();
    
    

}