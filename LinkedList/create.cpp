#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* link;

    // Constructor
    Node(int data) {
        this->data = data;
        this->link = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Method to insert a new node at the end of the linked list
    void insert(int data) {
        Node* newNode = new Node(data);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->link != nullptr) {
                temp = temp->link;
            }
            temp->link = newNode;
        }
    }

    // Method to display the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->link;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    // Insert elements into the linked list
    list.insert(10);
    list.insert(20);
    list.insert(30);

    // Display the linked list
    cout << "Linked List: ";
    list.display();

    return 0;
}
