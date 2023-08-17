#include<stack>
#include<iostream>
using namespace std;

class Stack{
    //properties
    public:
    int top;
    int *arr;
    int size;

    Stack(int size ){
        this -> size = size;
        arr =new int[size];
        top=-1;

    };
    int push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
        cout<<"Stack overflow\n";
    }
    }
    int pop(){
        if(top>=0){
            top--;
            cout<<arr[top+1];
        }else{
            cout<<"Stack underflow\n";
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"Stack is empty\n";
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    } 

};

int main(){


Stack s1(5);
s1.push(34);
s1.push(56);
s1.push(90);
cout<<"Peek element is "<<s1.peek()<<endl;
s1.pop();
cout<<endl;
s1.pop();
cout<<endl;
cout<<"Peek element is "<<s1.peek()<<endl;
cout<<endl;
cout<<"Check "<<s1.isEmpty();


}