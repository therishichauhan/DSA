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

   void DeleteList (Node* &head,int p){
    if(p==0){
       
            Node* temp=head;
            head=head->next;
            free(temp);
       
    }else if(true){
        Node* second_last=head;
        while(second_last->next->next!=nullptr){
            second_last=second_last->next;
        }
        Node* save=second_last->next;
        second_last->next=NULL;

        }
        else{
        Node* temp=head;
        int cnt=0;
        while(cnt!=p-1){
            temp=temp->next;
            cnt++;
        }
        Node* tobedeleted=temp->next;
        temp->next=temp->next->next;
   }
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
    list.DeleteList(head, 2);
    list.display(head);

    return 0;
}
