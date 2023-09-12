#include<iostream>
using namespace std;

class tree{
    public:
    int data;
    tree *left,*right;
    tree(int num){
        this->data=num;
        this->left=this->right=NULL;
    }
};

void inorder(tree *root){
    if(root==NULL){
        return;
    }
    cout<<root->data;
    inorder(root->left);
    inorder(root->right);
}

void preorder(tree *root){
    if(root==NULL){
        return;
    }
    preorder(root->left);
    cout<<root->data;
    preorder(root->right);
}
void postorder(tree *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}
int main(){

    tree *t1=new tree(1);
    t1->left=new tree(4);
    t1->right=new tree(3);
    t1->left->left=new tree(2);
    t1->left->right=new tree(2);
    cout<<"Inorder traversal of binary tree ";
    inorder(t1);
    cout<<"Preorder traversal of binary tree ";
    inorder(t1);
    cout<<"Postorder traversal of binary tree ";
    inorder(t1);

}
