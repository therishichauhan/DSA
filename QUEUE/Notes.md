# Queues

**A Queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.**

``The difference between stacks and queues is in removing. In a stack, we remove the most recently added item; whereas, in a queue, we remove the least recently added item.``

**Operations on Queue**: Mainly the following four basic operations are performed on queue:

- Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition.

- Dequeue: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition.

- Front: Get the front item from queue.

- Rear: Get the last item from queue.


![Alt text](Queue.png)

**Array implementation Of Queue**

```
struct Queue {
    int front, rear, capacity;
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
    }
    ~Queue() { delete[] queue; }
 
    void queueEnqueue(int data)
    {
        if (capacity == rear) {
            printf("\nQueue is full\n");
            return;
        }
            queue[rear] = data;
            rear++;
        return;
    }
 
    void queueDequeue()
    {
        if (front == rear) {
            printf("\nQueue is  empty\n");
            return;
        }
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }
            rear--;
        return;
    }
   
    void queueFront()
    {
        if (front == rear) {
            printf("\nQueue is Empty\n");
            return;
        }
        printf("\nFront Element is: %d", queue[front]);
        return;
    }

    int queuerear(){
        if (front == rear) {
            return 0;
        }
        return (front+rear-1)%capacity;
    }
};
 
```

**Queue in C++ STL**

Syntax:
```
queue< data_type > queue_name;

where,
data_type is the type of element to be stored 
in the queue.
queue_name is the name of the queue data structure.

```

The functions supported by std::queue are :

- empty() – Returns whether the queue is empty.

- size() – Returns the size of the queue.

- swap(): Exchange the contents of two queues but the queues must be of same type, although sizes may differ.

- emplace(): Insert a new element into the queue container, the new element is added to the end of the queue.

- front() and back(): front() function returns a reference to the first element of the queue. back() function returns a reference to the last element of the queue.

- push(g) and pop(): The push() function adds the element ‘g’ at the end of the queue. The pop() function deletes the first element of the queue.


**Queue Implementation Using Linked List**


```
struct Node
{
    int data;
    Node *next ;
};
class Queue
{
    Node *front, *rear;
 
public:
    Queue()
    {
        front = rear = NULL;  
 
    }
    void Enqueue(int elem)    
	// insertion values from rear side
    {
        Node *newnode;
        newnode = new Node;
        newnode->data = elem;
        newnode->next = NULL;
 
        if(front == NULL)
            front = rear = newnode;
        else
        {
            rear->next = newnode;
            rear = newnode;
        }
    }
    void Dequeue()            
	// delete values from front side
    {
        Node *temp;
        if(front == NULL)
            cout<<"Queue is Empty";
        else
        {
            temp= front;
            front = front->next;
            delete temp;
        }
 
    }
    void show()
    {
        Node *temp;
        temp= front;
        while(temp!=NULL) 
        {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<endl;
    }
};

```