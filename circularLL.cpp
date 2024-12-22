#include<iostream>
#include<map>
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


void insertNode(Node* &tail, int element, int data) {
    if(tail == NULL) {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
    }
    else {
        Node* curr = tail;
        while(curr -> data != element) {
            curr = curr -> next;
        }

        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deleteNode(Node* &tail,int value) {
    if(tail == NULL) {
        return;
    }
    else {
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

        if(tail == curr) {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;

        
    }
}

void print(Node* tail) {
    Node* temp = tail;

    if(tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);
    cout << endl;
}

bool isCircular(Node* tail) {

    if(tail == NULL) {
        return true;
    }


    Node* temp = tail -> next;
    while(temp != NULL && temp != tail) {
        temp = temp -> next;
    }

    if(temp == tail) 
        return true;
    else 
        return false;
}

bool detectLoop(Node* head) {
    if(head == NULL) {
        return NULL;
    }

    map<Node*, bool> visited;
    Node* temp = head;
    while(temp != NULL) {
        if(visited[temp] == true) {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;

    }
    return false

}

int main() 
{
    
    Node* tail = NULL;

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);



    insertNode(tail,3,2);
    print(tail);

    /*deleteNode(tail,3);
    print(tail);*/

    bool found = isCircular(tail);
    if(found) {
        cout << "List is circular" << endl;
    }
    else {
        cout << "List is not circular" << endl;
    }
    

    return 0;

}