#include<iostream>
#include <stack>
using namespace std;

stack<int> reverse (stack<int> &given){
    stack<int> temp;
    while(!given.empty()){
        int curnt=given.top();
        given.pop();
        temp.push(curnt);
    }
   stack<int> result;
   while(!temp.empty()){
    int curnt=temp.top();
    temp.pop();
    result.push(curnt);
   }
   return result;
}

int main(){
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    stack<int> s2=reverse(s1);
    while(!s2.empty()){
        cout<<s2.top();
        s2.pop();
    }

    return 0;

}