#include<iostream>
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

class LinkedList {
public:
    void insert(Node* &head, int num) {
        Node* newnode = new Node(num);
        if (head == nullptr) {
            head = newnode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    void display(Node* head) {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void update(Node* head, int val, int p) {
        Node* temp = head;
        int cnt = 0;
        while (cnt != p) {
            temp = temp->next;
            cnt++;
        }
        temp->data = val;
    }
};

int main() {
    LinkedList list;
    Node* head = nullptr;

    int x, num;
    cout << "Enter the number of values: " << endl;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> x;
        list.insert(head, x);
    }
    list.update(head, 0, 2);
    list.display(head);

    return 0;
}
