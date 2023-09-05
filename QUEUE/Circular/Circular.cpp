#include <iostream>
using namespace std;

class queue{
    int size;
    int* arr;
    int rear=-1;
    int front=-1;
    public:
    queue(int s){
        this->size=s;
        arr=new int[s];
    }

        bool isempty(){
            return rear==-1 && front==-1;
        }
    void enqueue(int num){
        if(((rear+1)%size)==front){
            cout<<"queue is full";
            return;
        }
        if(front==-1){
            front=0;
        }
        rear=(rear+1)%size;
        arr[rear]=num;
    }

    int dequeue(){
        if(isempty()){
            cout<<"queue is empty";
            return -1;
        }
        if(rear==front){
            rear=front=-1;
        }else{
        front=(front+1)%size;
        }
     }
        int peek(){
            if(isempty()){
            cout<<"queue is empty";
            }
             return arr[front];
        }
};

int main()
{

    queue Q1(5);
    Q1.enqueue(1);
    Q1.enqueue(2);
    Q1.enqueue(3);
    Q1.dequeue();
    cout<<Q1.peek();


}