#include <iostream>
#include<climits>
#include<stack>
#include<algorithm>
using namespace std;

int prec(char ch) {
    if (ch == '^') {
        return 3;
    } else if (ch == '*' || ch == '/') {
        return 2;
    } else if (ch == '+' || ch == '-') {
        return 1;
    }
    return -1;
}

bool isLeftAssociative(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

string infixToPrefix(string &str) {
    int n = str.length();
    stack<char> s1;
    string result = "";
    reverse(str.begin(), str.end());
    for (int i = 0; i < n; i++) {
        if (str[i] == '(') {
            str[i] = ')';
            i++;
        } else if (str[i] == ')') {
            str[i] = '(';
            i++;
        }
    }

    for (int i = 0; i < n; i++) {
        if ('a' <= str[i] && str[i] <= 'z') {
            result += str[i];
        } else if (str[i] == '(') {
            s1.push(str[i]);
        } else if (str[i] == ')') {
            while (!s1.empty() && s1.top() != '(') {
                char x = s1.top();
                result += x;
                s1.pop();
            }
            if (!s1.empty() && s1.top() == '(') {
                s1.pop();
            }
        } else {
            while (!s1.empty() && s1.top() != '(' && 
                   ((isLeftAssociative(str[i]) && prec(s1.top()) >= prec(str[i])) ||
                   (!isLeftAssociative(str[i]) && prec(s1.top()) > prec(str[i])))) {
                char x = s1.top();
                result += x;
                s1.pop();
            }
            s1.push(str[i]);
        }
    }
    while (!s1.empty()) {
        result += s1.top();
        s1.pop();
    }

    reverse(result.begin(), result.end()); 
    return result;
}

int main() {
    string infixExpression = "a+b/(d+c)*e";
    string prefixExpression = infixToPrefix(infixExpression);
    cout << "Infix: " << infixExpression << endl;
    cout << "Prefix: " << prefixExpression << endl;
    return 0;
}