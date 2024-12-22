#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    Node(int data) {
        this->data=data;
        this->next=NULL;
    }

    ~Node() {
            int value = this -> data;
            if(this -> next != NULL) {
                delete next;
                this -> next = NULL;
            }
        }
};

void insertAttail(Node* &tail, int element, int data) {
    
    if(tail==NULL) {
        Node* newnode = new Node(data);
        tail=newnode;
        newnode->next=newnode;
    }
    else {
        Node* curr = tail;
        while(curr->data != element) {
            curr=curr->next;
        }

        Node* temp = new Node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void deleteNode(Node* &tail,int value) {
    if(tail == NULL) {
        return;
    }
    else {
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data!=value) {
            prev=curr;
            curr = curr->next;
        }

        prev->next=curr->next;

        if(prev == curr) {
            tail = NULL;
        }

        else if(tail == curr) {
            tail=prev;
        }
        curr->next=NULL;
        delete curr;


    }
}

void print(Node* tail) {
    Node* temp = tail;

    if(tail == NULL) {
        cout<<"List is Empty" << endl;
        return;
    }
    do{
        cout << tail->data << " ";
        tail=tail->next;
    }while(tail!=temp);
    cout << endl;

}

int main()
{

    Node* tail = NULL;

    insertAttail(tail,5,3);
    print(tail);

    insertAttail(tail,3,5);
    print(tail);

    insertAttail(tail,5,7);
    print(tail);

    insertAttail(tail,5,6);
    print(tail);

    insertAttail(tail,3,4);
    print(tail);

    cout << "After deletation" << endl;

    deleteNode(tail,7);
    print(tail);


}