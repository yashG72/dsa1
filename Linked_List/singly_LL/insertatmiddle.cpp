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

    return 0;
}
