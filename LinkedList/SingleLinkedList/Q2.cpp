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

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insert(Node*& head, int num) {
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

    Node* merge(Node* &head1, Node* &head2) {
        Node* Sorted = new Node(-1);
        Node* dummy = Sorted;

        Node* ptr1 = head1;
        Node* ptr2 = head2;

        while (ptr1 && ptr2) {
            if (ptr1->data <= ptr2->data) {
                dummy->next = ptr1;
                ptr1 = ptr1->next;
            } else {
                dummy->next = ptr2;
                ptr2 = ptr2->next;
            }
            dummy = dummy->next;
        }

        if (ptr1) {
            dummy->next = ptr1;
        } else {
            dummy->next = ptr2;
        }

        return Sorted->next;
    }
};

int main() {
    LinkedList list1, list2, l3;

    int x, num, x2, num2;
    cout << "Enter the number of values for list1: ";
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> x;
        list1.insert(list1.head, x);
    }
    cout << "Enter the number of values for list2: ";
    cin >> num2;
    for (int i = 0; i < num2; i++) {
        cin >> x2;
        list2.insert(list2.head, x2);
    }

    Node* mergedHead = l3.merge(list1.head, list2.head);
    cout << "Merged List: ";
    l3.display(mergedHead);

    return 0;
}