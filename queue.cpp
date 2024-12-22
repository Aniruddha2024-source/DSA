#include<iostream>
using namespace std;

class Queue {
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue() {
        size = 100001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }



    bool isEmpty() {
        if(front == rear) {
            return true;
        }
        else {
            return false;
        }
    }

    void enqueue(int element) {
        if(rear == size) {
            cout << "Queue is overflow" << endl;
        }
        else {
            arr[rear] = element;
            rear++;
        }
    }

    int dequeue() {
        if(front == rear) {
            cout << "Queue is underflow " << endl;
            return -1;
        }
        else {
            //int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front == rear) {
                front = 0;
                rear = 0;
            }
            //return ans;
        }
    }





    int peek() {
        if(front == rear) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else {

            return arr[front];
        }
    }

};

int main() 
{
    Queue q;

    q.enqueue(22);
    q.enqueue(43);
    q.enqueue(44);

   /*cout << "Top element of the stack is : " << q.peek() <<endl;

    q.dequeue();

    cout << "Top element of the stack is : " << q.peek() <<endl;*/

    
    while(!q.isEmpty()) {
        int ans = q.peek();
        q.dequeue();
        cout << ans << endl;
    }
    
    
    if(q.isEmpty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout <<"Stack is not empty" << endl;
    }
    
    return 0;

}