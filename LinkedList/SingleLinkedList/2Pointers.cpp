//given 2 linkd list ,tell if they are  equal or not.Two Linked list are equal if they
//have the same data and the arrangememnt of data is also the same
#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* link;

    Node(int num){
        this->data=num;
        this->link=nullptr;
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
        while(temp->link!=nullptr){
            temp=temp->link;
        }
        temp->link=newnode;

    }
}
    void display(Node* head){
        Node* current=head;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current=current->link;

        }
    }

};
bool check(Node* head1, Node* head2) {
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    while (ptr1 != nullptr || ptr2 != nullptr) {
        if (ptr1->data!=ptr2->data) {
            return false;
        }
        ptr1 = ptr1->link;
        ptr2 = ptr2->link;
    }

    return (ptr1 == nullptr && ptr2 == nullptr);
}

int main(){
    LinkedList list,list2;
    Node* head1=nullptr;
     Node* head2=nullptr;

    int x,num,num2,x2;
    cout<<"enter the number of values for first list"<<endl;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>x;
        list.insert(head1,x);
    }
    cout<<"enter the number of values second list "<<endl;
     cin>>num2;
    for(int i=0;i<num2;i++){
        cin>>x2; 
        list2.insert(head2,x2);
    }
    cout<<check(head1,head2);
}