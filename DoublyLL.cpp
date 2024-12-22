#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }

        ~Node() {
            int value = this -> data;
            if(this -> next != NULL) {
                delete next;
                this -> next = NULL;
            }
        }
};

void insertatnode(Node* &tail, int element, int data) {

    if(tail == NULL) {

        Node* newnode = new Node(data);
        tail = newnode;
        newnode -> next = newnode;
    }
    
    else{

    Node* curr = tail;


    while(curr -> data != element) {
        curr = curr -> next;
    }
           
    Node* temp = new Node(data);
    temp -> next = curr -> next;
    curr -> next  = temp;    

    }

}

void deletenode(Node* &tail, int value) 
{
    if(tail == NULL) {
        cout <<"List is empty"<< endl;
        return;
    }
    else
    {
        Node* prev = tail;
        Node* curr = prev -> next;
        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        if(curr == prev) {
            tail = NULL;
        }

        else if(tail == curr) {
            tail = prev;
        }
        curr -> next = NULL;

        delete curr;

    }
}

void print(Node* &tail) {
    Node* temp = tail;

    if(tail == NULL) {
        cout << "List is empty" <<endl;
    }

    do{
        cout << tail -> data << " ";
        tail = tail -> next;

    } while(tail  != temp);
    cout<<endl;
 
}

int main()
{
    Node* tail =NULL;

    insertatnode(tail,5,3);
    print(tail);

    insertatnode(tail,3,5);
    print(tail);

    /*insertatnode(tail,5,7);
    print(tail);

    insertatnode(tail,7,9);
    print(tail);

    insertatnode(tail,5,6);
    print(tail);

    insertatnode(tail,9,10);
    print(tail);*/

    deletenode(tail,5);
    print(tail);

    return 0;
}