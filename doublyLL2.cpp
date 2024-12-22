#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL; 
    }

    ~Node() {
        
        while( next != NULL) {
            delete next;
            next = NULL;
        }
    }
};

void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void insertAtMiddle(Node* &head, Node* &tail, int data, int position) {
    if(position == 1) {
        insertAtHead(head,data);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1) {
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL) {
        insertAtTail(tail,data);
        return;
    }

    Node* NodeToinsert = new Node(data);
    NodeToinsert -> next = temp -> next;
    temp -> next -> prev = NodeToinsert;
    temp -> next = NodeToinsert;
    NodeToinsert -> prev = temp;

}

void deleteNode(Node* &head, Node* &tail, int position) {
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next  = NULL;
        delete temp;
    }
    else {
        Node* curr = head;
        Node* prev = NULL;
        


        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

       

        prev -> next -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

        if(prev -> next == NULL) {
            tail = prev;
        }


    }
}

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}

int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while(temp != NULL) {
        len++;
        temp = temp -> next;
    }
    return len;
    
}


int main() 
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    

    /*insertAtHead(head,12);
    print(head);

    insertAtHead(head,13);
    print(head);

    insertAtHead(head,14);
    print(head);

    insertAtHead(head,15);
    print(head);*/


    insertAtTail(tail,9);
    print(head);

    insertAtTail(tail,8);
    print(head);

    insertAtTail(tail,7);
    print(head);

    insertAtMiddle(head,tail,6,5);
    print(head);


    cout << "Head is : " << head -> data << endl;
    cout << "Tail is : " << tail -> data << endl;

    deleteNode(head,tail,3);
    print(head);

    cout << "Head is : " << head -> data << endl;
    cout << "Tail is : " << tail -> data << endl;


    cout << "Length is : " << getLength(head) << endl;
    return 0;
}