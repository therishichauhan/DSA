#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int num) {
        this->data = num;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoubleLinkedList {
public:
    Node* head;
    Node* tail;

    DoubleLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // void insertatbegning(int num) {
    //     Node* newnode = new Node(num);

    //     if (head == nullptr) {
    //         head = newnode;
    //         tail = newnode;
    //     } else {
    //         newnode->next=head;
    //         head->prev=newnode;
    //         head=newnode;
    //     }
    // }


     void insert(int num) {
        Node* newnode = new Node(num);

        if (head == nullptr) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next=newnode;
            newnode->prev=tail;
           tail=newnode;
        }
    }

//     void insertatKth(int num, int p) {
//      Node* newnode = new Node(num);
//      Node* temp = head;
//      int cnt = 0;

//      while (cnt < (p - 1)) {
//          temp = temp->next;
//          cnt++;
//      }

//      newnode->next = temp->next;
//      temp->next = newnode;
//      newnode->prev = temp;
//      newnode->next->prev = newnode;
//  }


    void display(Node* current) {
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
    }
};

int main() {
    DoubleLinkedList list;

    int num, x;
    cout << "Enter the number of values: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> x;
        list.insert(x);
    }
 //   list.insertatKth(4,2);
    list.display(list.head);

    return 0;
}
