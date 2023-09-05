#include <iostream>
#include<climits>
#include<stack>
#include<algorithm>
using namespace std;

double evaluationofpostfix(string str){
    stack<double> s1;
    for(int i = 0; i < str.length(); i++){
        if(isdigit(str[i])==true){
            s1.push(str[i]-'0');
        }else{
            double lastfirst=s1.top();
            s1.pop();
            double lastsecond=s1.top();
            s1.pop();


            switch (str[i]) {
            case '+':
                s1.push(lastfirst+lastsecond);
                break;
            case '-':
                s1.push(lastfirst-lastsecond);
                break;
            case '*':
                s1.push(lastfirst*lastsecond);
                break;
            case '/':
                s1.push(lastfirst/lastsecond);
                break;
            }
        }
    }
    return s1.top();
}


int main(){
    string s = "23*45+*";
    cout << evaluationofpostfix(s) << endl; 
    return 0;
}