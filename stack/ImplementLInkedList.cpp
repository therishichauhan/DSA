#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int num) {
        this->data = num;
        this->next = nullptr;
    }
};

class Stack {
    int size;
    Node* head;
    int top;

public:
    Stack(int capacity) {
        this->size = capacity;
        this->top = 0;
        head = nullptr;
    }

    void push(int num) {
        if (top == size) {
            cout << "Overflow";
            return;
        }

        Node* newnode = new Node(num);
        newnode->next = this->head;
        this->head = newnode;
        this->top++;
    }

    void pop() {
        if (top == 0) {
            cout << "Underflow";
            return;
        }

        Node* temp = this->head;
        this->head = this->head->next;
        delete temp;
        this->top--;
    }

    bool isEmpty() {
        return this->head == nullptr;
    }

    int getTop() {
        if (isEmpty()) {
            cout << "Stack is empty";
            return -1; // Or any appropriate value
        }
        return this->head->data;
    }
};

int main() {
    Stack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.pop();
    s1.pop();
    cout<<s1.getTop()<<endl;
    cout<<s1.isEmpty();

    return 0;
}