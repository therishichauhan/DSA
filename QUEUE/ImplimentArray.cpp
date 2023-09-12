#include <iostream>
using namespace std;

class queue{
    int size;
    int* arr;
    int rear=-1;
    public:
    queue(int s){
        this->size=s;
        arr=new int[s];
    }

        bool isempty(){
            return rear==-1;
        }
    void enqueue(int num){
        if(rear==size-1){
            cout<<"queue is full";
            return;
        }
        rear++;
        arr[rear]=num;
    }

    int dequeue(){
        if(isempty()){
            cout<<"queue is empty";
            return -1;
        }
        int front=arr[0];
        for(int i=0;i<rear;i++){
            arr[i]=arr[i+1];
        }
        rear--;
    return front;
     }
        int peek(){
            if(isempty()){
            cout<<"queue is empty";
            }
             return arr[0];
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


