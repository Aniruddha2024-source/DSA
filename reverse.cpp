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


void insertAthead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAttail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
  
}

void insertAtmiddle(Node* &head, Node* &tail, int position, int data) {

    if(position == 1) {
        insertAthead(head,data);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1) {
        temp = temp -> next;
        cnt++;
    }

    if(temp->next == NULL) {
        insertAttail(tail,data);
        return;
    }

    Node* nodeToinsert = new Node(data);
    nodeToinsert -> next = temp -> next;
    temp -> next = nodeToinsert;

}

void reverse(Node* &head)
{
        
    Node* current = head;
    Node *prev = NULL, *forword = NULL;

    while (current != NULL) {
            
        forword = current->next;  
        current->next = prev;
        prev = current;
        current = forword;

    }
        head = prev;
}

void deletenode(Node* &head,Node* &tail,int position) {
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
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

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;


        if(prev -> next == NULL) {
            tail = prev;
        }

    }
    
  
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;   
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(10);
    /*cout << node1 -> data << endl;
    cout << node1 -> next << endl;*/
    Node* head = node1;
    Node* tail = node1;
    print(head);

    //insertAthead(head,20);
    //print(head);

    //insertAthead(head,30);
    //print(head);

    insertAttail(tail,20);
    print(head);

    insertAttail(tail,30);
    print(head);

    insertAtmiddle(head,tail,4,15);
    print(head);

    cout <<"Head is : " << head -> data <<endl;
    cout <<"tail is : " << tail -> data <<endl;

    deletenode(head,tail,4);
    print(head);

    cout <<"Head is : " << head -> data <<endl;
    cout <<"tail is : " << tail -> data <<endl;

    cout << "Reverse linked list : "; 
    reverse(head);
    print(head);


    return 0;
}