#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* buildTree(Node *root);
void inOrder(Node *root);
void preOrder(Node *root);
void postOrder(Node *root);
int main()
{
    Node *root=NULL;
    root=buildTree(root);
    cout<<"In Order Traversal:-"<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"Pre Order Traversal:-"<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"Post Order Traversal:-"<<endl;
    postOrder(root);
    return 0;
}
Node* buildTree(Node *root)
{
    int data;
    cout<<"Enter the data: ";
    cin>>data;
    root=new Node(data);

    if(data==-1)
    {
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left=buildTree(root);

    cout<<"Enter data for insertion in right of "<<data<<endl;
    root->right=buildTree(root);

    return root;
}
void inOrder(Node *root)
{
    if(!root)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
    return;
}
void preOrder(Node *root)
{
    if(!root)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    return;
}
void postOrder(Node *root)
{
    if(!root)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    return;
}
//Test case
//1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1