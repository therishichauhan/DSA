# Linked List
A linked list is a linear data structure which consists of nodes where each node contains a data field and a reference(link) to the next node in the list.

![Alt text](Linked-List-Data-Structure.png)

 In the linked list there is a head pointer, which points to the first element of the linked list, and if the list is empty then it simply points to null or nothing.
 
  The size of memory can be allocated or de-allocated at run time based on the operation insertion or deletion

Unlike Arrays, Linked List elements are not stored at a contiguous location. 

 insertion and deletion of elements are simpler than arrays since no elements need to be shifted after insertion and deletion, Just the address needed to be updated.
 ## Single-linked list

 Traversal of items can be done in the forward direction only due to the linking of every node to its next node
 ### A Node Creation:
 ``` js
 // A Single linked list node
class Node {
public:
    int data;
    Node* next;
};
 ```

Commonly used operations on Singly Linked List:
### Insertion
To insert a node at the start/beginning/front of a Linked List, we need to:

1. Make the first node of Linked List linked to the new node

2. Remove the head from the original first node of Linked List

3. Make the new node as the Head of the Linked List.

![Alt text](Linkedlist_insert_at_start.png)



### Insert a new node in Linked List at the front of the linked list 

``` js
void push(Node** head_ref, int new_data)
{
 
    // 1. allocate node
    Node* new_node = new Node();
 
    // 2. put in the data
    new_node->data = new_data;
 
    // 3. Make next of new node as head
    new_node->next = (*head_ref);
 
    // 4. Move the head to point to
    // the new node
    (*head_ref) = new_node;
}
```
### To insert a node after a given node in a Linked List, we need to:

1. Check if the given node exists or not. 
2. If it do not exists, terminate the process.
3. If the given node exists,
Make the element to be inserted as a new node
4. Change the next pointer of given node to the new node
5. Now shift the original next pointer of given node to the next pointer of new node

``` js
void insertAfter(Node* prev_node, int new_data)
{
    // 1. Check if the given prev_node is NULL
    if (prev_node == NULL) {
    cout << "The given previous node cannot be NULL";
        return;
    }
 
    // 2. Allocate new node
    Node* new_node = new Node();
 
    // 3. Put in the data
    new_node->data = new_data;
 
    // 4. Make next of new node as
    // next of prev_node
    new_node->next = prev_node->next;
 
    // 5. move the next of prev_node
    // as new_node
    prev_node->next = new_node;
}
```

![Alt text](Linkedlist_insert_middle.png)

### Insert a node at the end of a Linked List, we need to:

1. Go to the last node of the Linked List
2. Change the next pointer of last node from NULL to the new node
3. Make the next pointer of new node as NULL to show the end of Linked List

![Alt text](Linkedlist_insert_last.png)

``` js
void append(Node** head_ref, int new_data)
{
    // 1. allocate node
    Node* new_node = new Node();
 
    // Used in step 5
    Node* last = *head_ref;
 
    // 2. Put in the data
    new_node->data = new_data;
 
    // 3. This new node is going to be
    // the last node, so make next of
    // it as NULL
    new_node->next = NULL;
 
    // 4. If the Linked List is empty,
    // then make the new node as head
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
 
    // 5. Else traverse till the last node
    while (last->next != NULL) {
        last = last->next;
    }
 
    // 6. Change the next of last node
    last->next = new_node;
    return;
}
```