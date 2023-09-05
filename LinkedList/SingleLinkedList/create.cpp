#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int num){
        this->data=num;
        this->next=nullptr;
    }
};

class LinkedList{
    public:
    void insert(Node* &head,int num){
         Node* newnode=new Node(num);
        if(head==nullptr){
            head=newnode;
        }else{
            Node* temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
    void display(Node* head){
        Node* current=head;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current=current->next;

        }
//-------recursive insertion----------------
    // Node* insert(Node* current, int num) {
    //     if (current == nullptr) {
    //         return new Node(num);
    //     }

    //     current->next = insert(current->next, num);
    //     return current;
    // }

    // void display(Node* current) {
    //     if (current == nullptr) {
    //         return;
    //     }
    //     cout << current->data << " ";
    //     display(current->next);
    // }
//--------------------------------------------------
 // display linkedlist in reverse order
    // void reverse(Node* head){
    //     if(head==NULL){
    //         return;
    //     }
    //     reverse(head->next);
    //     cout<<head->data<< " "<<endl;
        
    // }
   
};

int main(){
    LinkedList list;
    Node* head=nullptr;

    int x,num;
    cout<<"enter the number of values "<<endl;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>x;
        list.insert(head,x);
    }
   list.display(head);
//    list.reverse(head);

//-------recursive insertion----------------
//  for (int i = 0; i < n; i++) {
//         cin >> x;
//         head = list.insert(head, x); // Update the head after each insertion
//     }

}





