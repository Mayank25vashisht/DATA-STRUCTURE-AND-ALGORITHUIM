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


bool searchRecursive(Node* root, int key) {
    
    if (root->data == key)
        return true;

    if (key < root->data)
        return searchRecursive(root->left, key);
    else
        return searchRecursive(root->right, key);
}
bool searchNonRecursive(Node* root, int key) {
    Node* temp = root;
    while (temp != NULL) {
        if (temp->data == key)
            return true;
        else if (key < temp->data)
            temp = temp->left;
        else
            temp = temp->right;
    }
    return false;
}


int main() {
    
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(8);

    int key;
    cout << "Enter number to search: ";
    cin >> key;

    
    if (searchRecursive(root, key))
        cout << key << " found (Recursive)\n";
    else
        cout << key << " not found (Recursive)\n";

    
    if (searchNonRecursive(root, key))
        cout << key << " found (Non-Recursive)\n";
    else
        cout << key << " not found (Non-Recursive)\n";

    return 0;
}