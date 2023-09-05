#include <iostream>
#include<climits>
using namespace std;

class MyStack {
    int* arr;
    int size;
    int topIndex;

public:
    MyStack(int capacity) {
        this->size = capacity;
        this->topIndex = -1;
        arr = new int[capacity];
    }

    void push(int num) {
        if (topIndex == size - 1) {
            cout << "Overflow";
            return;
        }
        topIndex++;
        arr[topIndex] = num;
    }

    int pop() {
        if (topIndex == -1) {
            cout << "Underflow";
            return INT_MIN;
        }
        topIndex--;
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    int getTop() {
        if (topIndex == -1) {
            cout << "Underflow";
            return INT_MIN;
        }
        return arr[topIndex];
    }
};

int main() {
    MyStack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout << s1.getTop()<<endl;
    s1.pop();
     cout << s1.getTop();


    return 0;
}
