#include<iostream>
using namespace std;
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;
//     Node(int num){
//         this->data=num;
//        this->next=nullptr;
//        this->prev=nullptr;
//     }
// };  
// class DoubleLinkedList{
//     public:
//     Node* head;
//     Node* tail;

//     DoubleLinkedList(){
//         head=nullptr;
//         tail=nullptr;
//     }
//    void insert(Node* &head, Node* &tail, int num) {
//     Node* newnode = new Node(num);
//     newnode->next = nullptr;
//     newnode->prev = tail;

//     if (tail != nullptr) {
//         tail->next = newnode;
//     }
//     if (head == nullptr) {
//         head = newnode;
//     }
//     tail = newnode;
// }
//      void display(Node* head){
//         Node* current=head;
//         while(current!=nullptr){
//             cout<<current->data<<" ";
//             current=current->next;
//         }
//     }
// };
//    int main() {
//     DoubleLinkedList list;

//     int num, x;
//     cout << "Enter the number of values: ";
//     cin >> num;
    
//     for (int i = 0; i < num; i++) {
//         cin >> x;
//         list.insert(list.head, list.tail, x);
//     }
//     list.display(list.head);
//     return 0;
// }
