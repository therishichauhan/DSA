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

    // private:
    // Node* head;
    public:

    // LinkedList(){
    //     head=nullptr;
    // }

    void InsertAtLast(Node* &head,int num){
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
    void InsertAtFirst(Node* &head,int num){
        Node* NewNode=new Node(num);
        NewNode->link=head;
        head=NewNode;
    }

    void InsertAtKth(Node* &head,int num,int position){
        if(position==0){
            InsertAtFirst(head,num);
            return;
        }
   
        Node* NewNode=new Node(num);
        Node* temp=head;
     int current_position=0;
        while(current_position!=position-1){
            temp=temp->link;
            current_position++;
        }
        NewNode->link=temp->link;
        temp->link=NewNode;
    }
    void displayL(Node* head) {
        Node* current = head;
        while (current !=nullptr) {
            cout << current->data << " ";
            current = current->link;
        }
        cout << endl;
    }
    //  void displayF(Node* head) {
    //     Node* current = head;
    //     while (current != nullptr) {
    //         cout << current->data << " ";
    //         current = current->link;
    //     }
    //     cout << endl;
    // }
    // void displayK(Node* head) {
    //     Node* current = head;
    //     while (current != nullptr) {
    //         cout << current->data << " ";
    //         current = current->link;
    //     }
    //     cout << endl;
    // }
};

int main(){
    LinkedList list;
   Node* head=NULL;
    int n,x;
    cout<<"Enter the number of values "<<endl;
    cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>x;
    //     list.InsertAtFirst(head,x);
    // }
    // for(int i=0;i<n;i++){
    //     cin>>x;
    //     list.InsertAtLast(x);
    // }
    for(int i=0;i<n;i++){
        cin>>x;
        list.InsertAtLast(head,x);
    }
    list.InsertAtKth(head,0,2);
    cout<<"Linked list"<<endl;
    // list.displayF(head);
    list.displayL(head);
     // list.displayK(head);

}