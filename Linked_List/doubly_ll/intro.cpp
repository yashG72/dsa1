#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Traversing a linked list
void print(Node* &head) {
    Node* temp = head;
     
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Length of a linked list
int getLength(Node* &head) {
    int len = 0;
    Node* temp = head;
     
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

//Insert at head
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

//Inserting at Tail
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

//Inserting at position
void insertAtPosition(Node* &tail,Node* &head, int position, int d) {
    Node* temp = head;
    int cnt = 1;

    //inserting at start
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at last
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    // Creating a new node
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert = temp;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    //cout << getLength(head) << endl;

    insertAtHead(head,8);
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtPosition(tail,head,3,11);
    print(head);


    

    return 0;
}
