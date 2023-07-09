#include<iostream>
using namespace std; 

struct node {
    int key;
    node* left;
    node* right;
    

    node(int k)
    {
        key=k;
        left=right=NULL;
    }

};

void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

void preorder(node* root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}
void postorder(node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        inorder(root->right);
        cout<<root->key<<" ";
    }
}

int main(){

    node *root= new node(10);
    root->left=new node(20);
    root->right= new node(30);
    root->left->left=new node(100);

    inorder(root);

return 0;
}