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

        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }

    }
};

void insertAtHead(Node*&head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail->next=temp;
    tail = temp;
}

void insetAtmiddle(Node* &head,Node* &tail, int pos, int data) {

    if(pos == 1) {
        insertAtHead(head,data);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < pos-1) {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL) {
        insertAtTail(tail,data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}


void deleteNode(Node* &head,Node* &tail, int pos) {
    if(pos == 1) {
        Node* temp = head;
        head =  head->next;
        temp->next = NULL;
        delete temp;
    }
    else {
        Node* prev = NULL;
        Node* curr = head;

        int cnt=1;
        while(cnt < pos) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        
        prev->next=curr->next;
        curr->next = NULL;
        delete curr;



        if(prev->next == NULL) {
            tail = prev;
        }


    }
}

Node* reverseList(Node* &head) {


    if(head == NULL && head->next == NULL) {
        return head;
    }
  
    Node* prev = NULL;
    Node* temp = head;


    while(temp != NULL) {
        Node* front = temp->next;
        temp->next=prev;
        prev = temp;
        temp = front;
    }
    head = prev;
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    //insertAtHead(head,20);
    //print(head);
    //insertAtHead(head,30);


    insertAtTail(tail,20);
    print(head);

    insertAtTail(tail,30);
    print(head);

    insetAtmiddle(head,tail,4,40);
    print(head);


    /*deleteNode(head,tail,4);
    print(head);*/


    cout << head->data << endl;
    cout << tail->data << endl;

    reverseList(head);
    print(head);

    cout << head->data << endl;
    cout << tail->data << endl;

    

}