#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

double evaluationofprefix(string str) {
    stack<double> s1;
    
    for (int i = str.length() - 1; i >= 0; i--) {
         if(isdigit(str[i])==true){
            s1.push(str[i]-'0');
        } else if (str[i] == ' ' || str[i] == '\t') {
            continue;
        } else {
            double lastfirst = s1.top();
            s1.pop();
            double lastsecond = s1.top();
            s1.pop();

            switch (str[i]) {
                case '+':
                    s1.push(lastfirst + lastsecond);
                    break;
                case '-':
                    s1.push(lastfirst - lastsecond);
                    break;
                case '*':
                    s1.push(lastfirst * lastsecond);
                    break;
                case '/':
                    s1.push(lastfirst / lastsecond);
                    break;
                default:
                    return -1;
            }
        }
    }
    
    return s1.top();
}

int main() {
    string s = "+9*26";
    cout << evaluationofprefix(s) << endl; 
    return 0;
}
