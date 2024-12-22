#include<iostream>
#include<stack>
using namespace std;

class Stack {

    public: 
        int size;
        int *arr;
        int top;

        Stack(int size) {
            this -> size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element) {
            if(size - top > 1) {
                top++;
                arr[top] = element;
            }
            else{
                cout << "Stack is overflow" << endl;
            }

        }

        void pop()  {

            if( top >= 0) {
                top--;
            }
            else{
                cout << "Stack is underflow" << endl;
            }

        }

        int peek()   {
            if(top >= 0) {
                return arr[top];
            }
            else {
                cout << "Stack is empty" << endl;
                return -1;
            }
        }


        bool isEmpty() {

            if(top == -1) {
                return true;
            }
            else{
                return false;
            }

        }
};

int main() 
{
    Stack st(5);
    
    st.push(22);
    st.push(43);
    st.push(44);

    cout << "Top element of the stack is : " << st.peek() <<endl;
    st.pop();

    cout << "Top element of the stack is : " << st.peek() <<endl;
    st.pop();

    cout << "Top element of the stack is : " << st.peek() <<endl;
    st.pop();
    cout << "Top element of the stack is : " << st.peek() <<endl;

    if(st.isEmpty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout <<"Stack is not empty" << endl;
    }
    
    return 0;
}