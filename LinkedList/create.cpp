#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* link;

    Node(int num){
        this->data=num;
        this->link=nullptr;
    }
};
class LinkedList{

    private:
    Node* head;
    public:

    LinkedList(){
        head=nullptr;
    }

    void insert(int num){
    Node* newnode=new Node(num);
    if(head == nullptr){
        head=newnode;
    }else{
        Node* temp=head;
        while(temp->link!=nullptr){
            temp=temp->link;
        }
        temp->link=newnode;
    }    
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->link;
        }
        cout << endl;
    }
};

int main(){
    LinkedList list;
    int n,x;
    cout<<"Enter the number of values "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        list.insert(x);
    }
    cout<<"Linked list"<<endl;
    list.display();

}