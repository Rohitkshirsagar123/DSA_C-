#include<iostream>
#include <vector>
using namespace std;

class stack
{
    int *arr;
    int size;
    int top;

    public:

    stack(int s){
        size=s;
        top=-1;
        arr= new int[s];
    }

    // Push Operation
    void push(int value){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"pushed "<< value <<endl;
        }
    }

// pop operation
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            return;
        }
        else{
            
            cout<<"poped "<<arr[top]<<endl;
            top--;        }
    }

    // peak operation
    int peek(){
        if(top==-1){
            cout<<"stack is empty\n";
            return 0;
        }
        else{
            return arr[top];
        }
    }

    // isEmpty
    bool Isempty(){
        return top==-1;
    }

    // isSize
    int isSize(){
        return top+1;
    }
};


int main(){
    cout<<"Stack Linear Data structure"<<endl;
    vector<int>arr;

    stack s(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    // s.push(11);

    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();

    cout<<s.peek()<<endl;

    cout<<s.Isempty()<<endl;

    cout<<s.isSize()<<endl;




   
}