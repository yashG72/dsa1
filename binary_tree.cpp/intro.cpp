#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree() {
    cout << "Enter the value: " << endl;
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    Node* root = new Node(data);

    cout << "Enter the value for left of " << data << endl;
    root->left = buildTree();

    cout << "Enter the value for right of " << data << endl;
    root->right = buildTree();

    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
            cout<<temp->data<<" ";
              if(temp->left){
               q.push(temp->left);
             }
               if(temp->right){
            q.push(temp->right);
              }
        }

       
    }

}

int main() {
    Node* root = buildTree();
    // Additional code if needed

    cout<<"Printing the level order traversal output "<<endl;
    levelOrderTraversal(root);
    return 0;
}
