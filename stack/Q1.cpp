#include <iostream>
#include<climits>
#include<stack>
#include<algorithm>
using namespace std;

//-------------implementation of a sorting algorithm for a stack-------------------


void sortstk(stack<int>&stk){
    stack<int> demo;
    while(!stk.empty()){
        int temp=stk.top();
        stk.pop();
        while(!demo.empty()&& temp<demo.top()){
            int x=demo.top();
            demo.pop();
            stk.push(x); 
        }
        demo.push(temp);
    }
    while(!demo.empty()){
            int x=demo.top();
            stk.push(x);
            demo.pop();
        }
}

int main(){

    stack<int> s1;
    s1.push(3);
    s1.push(7);
    s1.push(1);
    s1.push(5);
    sortstk(s1);
    while(!s1.empty()){
        cout<<s1.top();
        s1.pop();
    }
}