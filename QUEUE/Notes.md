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
    int cap, front, rear;
    int *arr;

    Queue(int size) {
        cap = size; // Assign the size to cap
        front = 0;
        rear = 0;
        arr = new int[cap];
    }

    void enqueue(int num) {
        if (rear == cap - 1) { // Check for overflow
            cout << "Overflow";
            return;
        }
        arr[rear++] = num;
    }

    int dequeue() {
        if (front == rear) { // Check for underflow
            cout << "Underflow";
            return -1;
        }
        int temp = arr[front++];
        return temp;
    }
};
 
```

``Here problem is that if we pop some item from front and then rear reach to the capacity of the queue and although there are empty spaces before front means the queue is not full but as per condition in isFull() function, it will show that the queue is full``

**What is a Circular Queue?**

A Circular Queue is an extended version of a normal queue where the last element of the queue is connected to the first element of the queue forming a circle.

**Operations on Circular Queue:**

Front: Get the front item from the queue.

Rear: Get the last item from the queue.

enQueue(value) This function is used to insert an element into the circular queue. In a circular queue, the new element is always inserted at the rear position. 

- Check whether the queue is full – [i.e., the rear end is in just before the front end in a circular manner].
If it is full then display Queue is full. 

- If the queue is not full then,  insert an element at the end of the queue.

deQueue() This function is used to delete an element from the circular queue. In a circular queue, the element is always deleted from the front position. 

- Check whether the queue is Empty.

- If it is empty then display Queue is empty.

- If the queue is not empty, then get the last element and remove it from the queue.

![Alt text](Circular-queue_1.png)


**Array implementation Of  Circular Queue**

```
struct Queue{
    int cap,front,rear;
    int *arr;
    Queue(int size){
        front=-1;
        rear=-1;
        cap=size;
        arr=new int[cap];
    }
    
    void enqueue(int num){
        if((rear+1) % cap == front){
            cout<<"overflow";
            return ;
        }
        if(front==-1){
            front=0;
        }
        rear=(rear+1)%cap;
        arr[rear]=num;
    }
    int dequeue(){
        
        if(front==-1){
            return -1;
        }
        
        if(front==rear){
            rear=front=-1;
        }
        int temp=arr[front];
        front=(front+1)%cap;
        
        return temp;
    }
    
    bool isempty(){
        return front==-1;
    }
    
    bool isfull(){
        return (rear+1) % cap == front;
    }
     int first ()
     {
         if (isempty()) {
        return -1;
    }
         return arr[front];
     }
     
     int last ()
     {
 if (isempty()) {
        return -1;
    }
    return arr[rear];
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