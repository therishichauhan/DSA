# Linked list

Linked Lists are linear or sequential data structures in which elements are stored at non-contiguous memory locations and are linked to each other using pointers.

Each element in a linked list consists of two parts:

- Data: This part stores the data value of the node. That is the information to be stored at the current node.

- Next Pointer: This is the pointer variable or any other variable which stores the address of the next node in the memory.

``Advantages of Linked Lists over Arrays:`` Arrays can be used to store linear data of similar types, but arrays have the following limitations:

1. Dynamic Size:

Linked lists can dynamically grow or shrink in size during program execution, whereas arrays have a fixed size defined at the time of declaration.

2. Efficient Insertion and Deletion:

Inserting or deleting elements in a linked list is more efficient compared to arrays, especially in the middle of the list, as it involves adjusting pointers, rather than shifting elements.

3. Memory Utilization:

Linked lists use memory more efficiently as they only allocate memory for the actual elements and the pointers, whereas arrays require contiguous memory allocation for all elements, leading to potential wasted space.

4. No Pre-allocation of Memory:

Linked lists do not require pre-allocation of memory for a specific size, making them more adaptable to varying data requirements.

5. No Need for Reallocation:

Unlike arrays, linked lists do not need reallocation and copying of elements when the size exceeds the allocated memory, making them more suitable for scenarios where the size is not known in advance.

6. Ease of Implementation:

Implementing certain operations, such as insertion and deletion, is often simpler in linked lists compared to arrays, where resizing and shifting may be necessary.

7. No Wasted Memory in Sparse Data:

In the case of sparse data, where many elements may be null or undefined, linked lists can save memory by only allocating space for the existing elements and their associated pointers.

8. Ease of Merging and Splitting:

Merging two linked lists or splitting one into two is more straightforward than performing similar operations with arrays.

``Disadvantages of Linked Lists:``

1. Random access is not allowed in Linked Lists. We have to access elements sequentially starting from the first node. So, we cannot do a binary search with linked lists efficiently with its default implementation. Therefore, lookup or search operation is costly in linked lists in comparison to arrays.


2. Extra memory space for a pointer is required with each element of the list.

3. Not cache-friendly. Since array elements are present at contiguous locations, there is a locality of reference which is not there in the case of linked lists.

In C/C++, we can represent a node using structure. Below is an example of a linked list node with integer data.

```
struct Node
{
    int data;
    struct Node* next; 
};
```

``Program in C/C++ to create a simple linked list``

```
#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int num) {
        data = num;
        next = nullptr;
    }

    void display(node* head) {
        while (head != nullptr) {
            cout << head->data << " ";
            head = head->next;
        }
    }
};

int main() {

    node* list = new node(10);
    list->next = new node(20);
    list->next->next = new node(30);

    // Display the linked list
    list->display(list);

    return 0;
}

```

``Traversal of Singly Linked List``

Recursively traversing the list: 

```
void traverse(Node* head)
{
	if (head == NULL)
	return;
	cout << head->data << " ";

	traverse(head->next);
}
```

Iterative traversing the list: 

```
void display(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}
```


``Insertion in Singly Linked Lists``

- ``Inserting a Node at Beginning:`` In this process, the new node is always added before the head of the given Linked List and the newly added node becomes the new head of the Linked List.

```
void insertatbegin(node* head,int value){
    if(head==nullptr){
        head=new node(value);
        return;
    }
    node* temp=new node(value);
    temp->next=head;
    head=temp;
}
```

The ``time complexity`` of inserting a node at start of the List is ``O(1)``.

- ``Inserting a Node after given Node`` :  One has to first allocate the new Node and change the next pointer of the newly created node to the next of the previous node and the next pointer of the previous node to point to the newly created node.

```
node* insertatK(node* head, int pos, int value) {
    node* temp = new node(value);
    if (head == nullptr) {
        if (pos == 1) {
            return temp;
        } else {
            return head;
        }
    }
    if (pos == 1) {
        temp->next = head;
        return temp;
    }
    node* curr = head;
    for (int i = 1; i <= pos - 2; i++) {
        curr = curr->next;
        if (curr == nullptr) {
            cout << "Position out of range" << endl;
            return head;
        }
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
```

The ``time complexity`` of inserting a node at start of the List is ``O(1)``.

- ``Inserting a Node at the End:`` The new node is always added after the last node of the given Linked List.Since a Linked List is typically represented by its head, we have to first traverse the list till the end in order to get the pointer pointing to the last node and then change the next of last node to the new node.

```
void insertEnd(node*& head, int x) {
    node* temp = new node(x);
    if (head == nullptr) {
        head = temp;
        return;
    }
    node* curr = head;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = temp;
}
```

``Delete Node of Singly Linked List``

- ``Delete First Node of Singly Linked List``: To remove the first node, we need to make the second node as head and delete the memory allocated for the first node.  


```
void removeFirstNode(node*& head) {
    if (head == nullptr)
        return;

    node* temp = head;
    head = head->next;

    delete temp;
}
```

- ``Delete Last of Singly Linked List``: To delete the last node of a linked list, find the second last node and make the next pointer of that node null. 

```
void removeLastNode(node*& head)
{
    if (head == nullptr)
        return;

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* second_last = head;
    while (second_last->next->next != nullptr) {
        second_last = second_last->next;
    }

    delete second_last->next;
    second_last->next = nullptr;
}
```

``Search in a Linked List (Iterative and Recursive)``

```
//Iterative Solution

int search(node * head, int x){
    int pos=1;
    node *curr=head;
    while(curr!=NULL){
        if(curr->data==x)
            return pos;
        else{
            pos++;
            curr=curr->next;
        }
    }
    return -1;
}

//Recursive Solution

int search(Node * head, int x){
    if(head==NULL)return -1;
    if(head->data==x)return 1;
    else{
        int res=search(head->next,x);
        if(res==-1)return -1;
        else return res+1;
    }
}
```

``Doubly Linked List ``

A doubly linked list is a type of linked list in which each node contains a data element and two pointers, one pointing to the next node in the sequence (similar to a singly linked list), and another pointing to the previous node in the sequence.

The structure representing a node of the doubly linked list is defined as:

```
#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int num) {
        data = num;
        next = nullptr;
        prev = nullptr;
    }

    void display(node* head) {
        while (head != nullptr) {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    node* head = nullptr;  
    node* current = nullptr;

    for (int i = 0; i < n; i++) {
        int data;
        cout << "Enter the data for node " << i + 1 << ": ";
        cin >> data;

        if (head == nullptr) {
            head = new node(data);
            current = head;
        } else {
            current->next = new node(data);
            current->next->prev = current;
            current = current->next;
        }
    }

    head->display(head);

    return 0;
}
```

``Insertion in a Doubly Linked List``

``Add a node at the front in a Doubly Linked List``

1. Firstly, allocate a new node (say new_node).
2. Now put the required data in the new node.
3. Make the next of new_node point to the current head of the doubly linked list.
4. Make the previous of the current head point to new_node.
5. Lastly, point head to new_node.

```
 void insertatbegin(node*& head, int new_data) {
        node* new_node = new node(new_data);

        new_node->next = head;
        new_node->prev = nullptr;

        if (head != nullptr)
            head->prev = new_node;

        head = new_node;
    }
```

``Add a node after a given node in a Doubly Linked List``

1. Firstly create a new node (say new_node).
2. Now insert the data in the new node.
3. Point the next of new_node to the next of prev_node.
4. Point the next of prev_node to new_node.
5. Point the previous of new_node to prev_node.
6. Change the pointer of the new node's previous pointer to new_node.

```
void insertAfter(Node* prev_node, int new_data)
{
    if (prev_node == NULL) {
        cout << "the given previous node cannot be NULL";
        return;
    }

    Node* new_node = new Node( new_data);
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;

    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}

```

``Add a node before a given node in a Doubly Linked List``

1. Allocate memory for the new node, let it be called new_node.
2. Put the data in new_node.
3. Set the previous pointer of this new_node as the previous node of the next_node.
4. Set the previous pointer of the next_node as the new_node.
5. Set the next pointer of this new_node as the next_node.
6. Now set the previous pointer of new_node.

If the previous node of the new_node is not NULL, then set the next pointer of this previous node as new_node.

Else, if the prev of new_node is NULL, it will be the new head node.

```
void insertBefore(Node* next_node, int new_data)
{
    if (next_node == NULL) {
        cout << "The given next node cannot be NULL" << endl;
        return;
    }

    Node* new_node = new Node(new_data);
    new_node->prev = next_node->prev;
    new_node->next = next_node;

    if (next_node->prev != NULL)
        next_node->prev->next = new_node;
    else
        head = new_node; // Update the head if the new node is inserted at the beginning

    next_node->prev = new_node;
}

```

``Add a node at the end in a Doubly Linked List``

1. Create a new node (say new_node).
2. Put the value in the new node.
3. Make the next pointer of new_node as null.
4. If the list is empty, make new_node as the head.
5. Otherwise, travel to the end of the linked list.
6. Now make the next pointer of last node point to new_node.
7. Change the previous pointer of new_node to the last node of the list.

```
void append(Node*& head, int data)
{
    Node* new_node = new Node(data);
    new_node->next = nullptr;

    if (head == nullptr) {
        new_node->prev = nullptr;
        head = new_node;  // Update the original head pointer
        return;
    }

    Node* last = head;
    while (last->next != nullptr)
        last = last->next;

    last->next = new_node;
    new_node->prev = last;
}

```

``Delete Head of a Doubly Linked List``

```
void delHead(Node*& head) {
    if (head == nullptr)
        return;

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    } else {
        Node* temp = head;
        head = head->next;
        head->prev = nullptr;
        delete temp;
        return;
    }
}

```

``Circular Linked``

The ``circular linked list`` is a linked list where all nodes are connected to form a circle. In a circular linked list, the first node and the last node are connected to each other which forms a circle. There is no NULL at the end.

- Each node in a circular linked list contains data and a pointer/reference to the next node.

- The last node's next pointer points back to the first node, creating the circular structure.

``Circular Linked List Traversal``

```
void printList(Node* head)
{
	Node* temp = head;
	if (head != NULL) {

		// Print nodes till we reach first node again
		do {
			cout << temp->data << " ";
			temp = temp->next;
		} while (temp != head);
	}
}
// Using For Loop
void printlist(Node *head){
    if(head==NULL)return;
    cout<<head->data<<" ";
    for(Node *p=head->next;p!=head;p=p->next)
        cout<<p->data<<" ";
}

```

``Insert at Begin of Circular Linked List``

```

// Here traversing to the last node and inserting the new node after the last node, then the next of the new node is made to point the head of the link list

Node *insertBegin(Node * head,int x){
    Node *temp=new Node(x);
    if(head==NULL)
        temp->next=temp;
    else{
        Node *curr=head;
        while(curr->next!=head)
            curr=curr->next;
        curr->next=temp;
        temp->next=head;
    }
    return temp;
}

//We are not traversing to the last node instead we attach the new node after head and interchange the data of head and the new node.

Node *insertBegin(Node * head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;    
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return head;
    }
}
```

``Insert at the end of Circular Linked List``

```

//  We are traversing to the last node and inserting the new node after the last node, then the next of the new node is made to point the head of the link list.

Node *insertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;    
    }
    else{
        Node *curr=head;
        while(curr->next!=head)
            curr=curr->next;
        curr->next=temp;
        temp->next=head;
        return head;
    }
}

// We are not traversing to the last node instead we attach the new node after head and interchange the data of head and the new node.

Node *insertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;    
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return temp;
    }
}
```

``Deleting head node from Singly Circular Linked List``

```
Node *delHead(Node *head){
    if(head==NULL)return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    Node *curr=head;
    while(curr->next!=head)
        curr=curr->next;
    curr->next=head->next;
    delete head;
    return (curr->next);
}
```