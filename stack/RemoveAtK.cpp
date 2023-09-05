#include<iostream>
#include <stack>
using namespace std;

stack<int> RemoveATK(stack <int> &given,int position){
    stack<int> temp;
    int cnt=0;
    while(cnt<=given.size()-position){
        int store=given.top();
        temp.push(store);
        given.pop();
        cnt++;
    }
    given.pop();
    while(!given.empty()){
         int store=given.top();
        temp.push(store);
        given.pop();
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
   s1.push(4);
   stack<int>s2 =RemoveATK(s1,0);
    while(!s2.empty()){
        cout<<s2.top();
        s2.pop();
    }

}