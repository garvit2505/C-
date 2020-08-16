//using oops concept
#include <iostream>
using namespace std;
class stack{
    private:
    int arr[100];
    int top;
    
    public:
    stack(){
        top=-1;
    }
    void push(int x){
        if(top==99){
            cout<<"Error: Stack overflow!"<<endl;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"there is no element to pop:"<<endl;
        }
        top--;
    }
    int Top() 
	{
		return arr[top];
	}

	int IsEmpty()
	{
		if(top == -1) return 1;
		return 0;
	}
    void print(){
        cout<<"Stack:"<<endl;
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<endl;
        }
    }    
};
int main(){
    stack s;
    s.push(2);
    s.push(3);
    s.push(7);
    s.print();
    s.pop();s.print();
    
    cout<<"Top is :  "<<s.Top()<<endl;
    s.push(6);s.push(8);
    s.IsEmpty();s.print();


}