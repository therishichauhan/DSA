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

int main(){

    tree *t1=new tree(1);
    t1->left=new tree(4);
    t1->right=new tree(3);
    t1->left->left=new tree(2);
    t1->left->right=new tree(2);

}
