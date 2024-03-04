#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // Destructor

~ Node() {
    int value = this->data;
    // Memory free
    if(this->next != NULL){
        delete next;
        this->next = NULL;
    }
    cout<<"Memory is free for node with data "<<value<<endl;
}
};


// Function to insert a node at the head
void insertAtHead(Node* &head, int d) {
    // New node created
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


// Function to insert a node at the tail
void insertAtTail(Node* &tail, int d) {
    // New node created
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


// Function to insert a node at a specific position
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
    temp->next = nodeToInsert;
}





// Function to print the linked list
void print(Node* &head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position, Node* &head, Node* &tail){
    if(position==1){
        Node *temp = head;
        head = head->next;
        temp -> next = NULL;
        delete temp;
    }

    //Deleting any middle or last node
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt < position){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }
    if(curr->next==NULL){
        tail = prev;
    }
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
}

int main() {
    // Creating a new node
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 14);
    print(head);

    insertAtPosition(tail,head, 3, 13);
    print(head);
    
    deleteNode(4,head, tail);
    print(head);

    cout<<"Head of the node is "<<head -> data<<endl;
    cout<<"Tail of the node is "<<tail -> data<<endl;

    return 0;
}
