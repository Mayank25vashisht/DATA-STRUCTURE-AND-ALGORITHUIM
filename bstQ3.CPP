# include <iostream>
using namespace std;
class node{public:
    int data;
    node* left;
    node* right;
node(int val){
    data=val;
    left=right=NULL;
}
};
class bst{
    public:
node* insert(node*root,int val){
    if(root==NULL){return new node(val);}
    else if(val<root->data){
        root->left=insert(root->left,val);
    }
    else if(val>root->data){
        root->right=insert(root->right,val);
    }
  return root;
}
node * del(node*root,int key){
    if(root==NULL){return root;}
     if(key>root->data){
        root->right= del(root->right,key);
        
    }
    else if (key<root->data){
        root->left= del(root->left,key);
    }
    else{
        if(root->left==NULL&&root->right==NULL){
            delete root;
            return NULL;
        }
       else if(root->left==NULL){
             node* temp=root->right;
             delete root;
             return temp;
        }
        else if (root->right==NULL){
            node* temp=root-> left;
            delete root;
            return temp;
        }
    
    node* temp=root->right;
    while(temp!=NULL){
        temp=temp->left;
        root->data=temp->data;
        root->right=del(root->right,temp->data);
    }
    return root;
}

}
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
};




int main(){
    bst t1;
    node* root=NULL;
    root=t1.insert(root,60);
     root=t1.insert(root,70);
      root=t1.insert(root,50);
       root=t1.insert(root,80);
        root=t1.insert(root,100);
        t1.inorder(root);
        t1.del(root,80);
        t1.inorder(root);
  return 0;}