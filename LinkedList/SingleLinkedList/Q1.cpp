// Given the head of linked list ,remove the k-th from the end of the list and 
//return its head
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

    void deleteK(Node* &head,int K){
        Node* ptr1=head;
         Node* ptr2=head;

         int cnt=K;
        while(cnt--){
            ptr2=ptr2->next;
        }
        if(ptr2==NULL){
            Node* temp=head;
            head=head->next;
            free(temp);
            return;
        }
        while(ptr2->next!=nullptr){
            ptr2=ptr2->next;
            ptr1=ptr1->next;
        }
        Node* temp=ptr1->next;
        ptr1->next=ptr1->next->next;
        free(temp);

    }
    void display(Node* head){
        Node* current=head;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current=current->next;

        }
    }
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
    list.deleteK(head,2);
   list.display(head);

}