#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void preorder(Node* root) {
    if (root == NULL)
        return;
    cout << root->data << " ";   
    preorder(root->left);        
    preorder(root->right);       
}


void inorder(Node* root) {
    if (root == NULL){
        return;}
    inorder(root->left);         
    cout << root->data << " ";   
    inorder(root->right);        
}


void postorder(Node* root) {
    if (root == NULL)
        return;
    postorder(root->left);      
    postorder(root->right);     
    cout << root->data << " ";  
}
void maximum(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    cout<<temp->data;
}
void minimum(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    } 
    cout<<temp->data;
}

int main() {
  
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->right = new Node(8);

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;
    maximum(root);
    cout<<endl;
    minimum(root);

    return 0;
}