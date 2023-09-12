#include<iostream>
#include<stack>
#include<algorithm>
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
void Preorder(tree *root) {
    stack<tree*> stk;
    tree *temp = root;

    if (root == NULL) {
        cout << "Tree is empty";
        return;
    }

    stk.push(temp);
    
    while (!stk.empty()) {
        temp = stk.top();
        stk.pop();
        cout << temp->data << " ";
        if (temp->right != NULL) {
            stk.push(temp->right);
        }
        if (temp->left != NULL) {
            stk.push(temp->left);
        }
    }
}

int main(){

    tree *t1=new tree(1);
    t1->left=new tree(4);
    t1->right=new tree(3);
    t1->left->left=new tree(2);
    t1->left->right=new tree(2);
    Preorder(t1);
}
