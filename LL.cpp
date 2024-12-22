#include<iostream>
#include<vector>
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

    if(head == NULL) {
        cout << "List is Empty" << endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;   
    }
    cout<<endl;
}


int getLength(Node* head) {
        Node* temp = head;
        int len = 0;
        while(temp != NULL) {
            len++;
            temp = temp->next;
        }
        return len;
}

        Node* findMid(Node* head) {

        Node* slow = head;
        Node* fast = head->next;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

        } 
        cout << slow->data << endl;
        return slow;

    }



//void reverse(Node* &head) {


    /*if(head == NULL || head -> next == NULL) {
        return head;
    }*/

    /*Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL) {
        Node* forward = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;

}*/


/*bool isCircular(Node* tail) {

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
}*/

/*bool detectLoop(Node* head) {
    if(head == NULL) {
        return NULL;
    }
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp != NULL) {
        if(visited[temp] == true) {
            cout<<temp->data<<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;

}*/

/*bool hasCycle(Node* head) { //floydAlgo

    if(head == NULL || head->next==NULL) {
        return NULL;
    }

    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && slow != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
        }
        slow = slow -> next;
        if(fast == slow) {
        
        return true;
    }
     

    }

    
    return false;

}*/

/*void printArr(int a[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << a[i] << " "; 
}*/

/*void Arr(Node* head) {
        
    int size = getLength(head);
    int *arr = new int(size);

        int i=0;

        Node* temp = head;
        while(temp != NULL) {
            arr[i++] = temp->data;
            temp = temp->next;
        }

        for ( i = 0; i < size; i++) 
        cout << arr[i] << " ";
        
}*/




int main()
{
    Node* node1 = new Node(10);
    /*cout << node1 -> data << endl;
    cout << node1 -> next << endl;*/
    Node* head = node1;
    Node* tail = node1;//NULL
    print(head);

    //insertAthead(head,20);
    //print(head);

    //insertAthead(head,30);
    //print(head);

    insertAttail(tail,5);
    print(head);

    insertAttail(tail,30);
    print(head);

    insertAtmiddle(head,tail,4,15);
    print(head);


    deletenode(head,tail,4);
    print(head);

    

    //cout << (getLength(head) - 1) << endl;

     
    //cout << findMid(head) << endl;

    //cout <<"Head is : " << head -> data <<endl;
    //cout <<"tail is : " << tail -> data <<endl;

    //deletenode(head,tail,4);
    

    //tail -> next = head -> next;
    //print(head);

    //reverse(head);
    //print(head);
    /*cout <<"Head is : " << head -> data <<endl;
    cout <<"tail is : " << tail -> data <<endl;

    print(head);

    bool found = isCircular(head);
    if(found) {
        cout << "List is circular" << endl;
    }
    else {
        cout << "List is not circular" << endl;
    }*/

    //bool found1 = detectLoop(head);
    /*bool found1 = hasCycle(head);
    if(found1) {
        cout << "Loop is present " << endl;
    }
    else {
        cout << "Loop is not present" << endl;
    }*/

    //cout << "Array  : " << getArr(head) << endl;
    //cout<<"length of the LL :"<<getLength(head)<< endl;;
    //cout<<"Array  : "<< Arr(head)<< endl;
    
    cout << head->data << endl;
    cout << tail->data << endl;


    return 0;

}