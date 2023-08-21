#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* link;
    bool visited;

    Node(int num) {
        this->data = num;
        this->link = nullptr;
        this->visited = false;
    }
};

class LinkedList {
public:
    void insert(Node*& head, int num) {
        Node* newnode = new Node(num);
        if (head == nullptr) {
            head = newnode;
        } else {
            Node* temp = head;
            while (temp->link != nullptr) {
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }

    void markVisited(Node*& head) {
        Node* ptr = head;
        while (ptr != nullptr) {
            ptr->visited = true;
            ptr = ptr->link;
        }
    }

    Node* findIntersection(Node* head) {
        Node* ptr = head;
        while (ptr != nullptr) {
            if (ptr->visited) {
                return ptr;
            }
            ptr = ptr->link;
        }
        return nullptr;
    }
};

int main() {
    LinkedList list, list2;
    Node* head1 = nullptr;
    Node* head2 = nullptr;

    int x, num, num2, x2;
    cout << "enter the number of values for first list" << endl;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> x;
        list.insert(head1, x);
    }

    cout << "enter the number of values second list " << endl;
    cin >> num2;
    for (int i = 0; i < num2; i++) {
        cin >> x2;
        list2.insert(head2, x2);
    }

    list.markVisited(head1);
    Node* intersectionNode = list.findIntersection(head2);

    if (intersectionNode) {
        cout << "Intersect at node with data: " << intersectionNode->data << endl;
    } else {
        cout << "No intersection found." << endl;
    }
}
