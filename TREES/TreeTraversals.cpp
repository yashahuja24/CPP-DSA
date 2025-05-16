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
void preOrder(Node *root);
void inOrder(Node *root);
void postOrder(Node *root);
int main()
{
    Node *root=NULL;
    root=buildTree(root);
    cout<<"Pre Order Traversal:-"<<endl;
    preOrder(root);
    cout<<"In Order Traversal:-"<<endl;
    inOrder(root);
    cout<<"Post Order Traversal:-"<<endl;
    postOrder(root);
    return;
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

    cout<<"Enter data for inserting in left of"<<data;
    root->left=buildTree(root);

    cout<<"Enter data for insertion in right of "<<data;
    root->right=buildTree(root);

    return root;
}