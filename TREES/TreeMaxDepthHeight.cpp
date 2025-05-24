#include<iostream>
#include<queue>
#include<stdlib.h>
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
Node* builtTree(Node *root);
void levelOrderTraversal(Node *root);
int maxHeight(Node *root);//TIME COMPLEXITY O(n)
int main()
{
    Node *root=NULL;
    root=builtTree(root);
    cout<<"Level Order Traversal: "<<endl;
    levelOrderTraversal(root);
    int ans=maxHeight(root);
    cout<<"Height of the Binary Tree is: "<<ans;
    return 0;
}
Node* builtTree(Node *root)
{
    int data;
    cout<<"Enter the data: ";
    cin>>data;
    root=new Node(data);

    if(data==-1)
    {
        return NULL;
    }

    cout<<"Enter the data left of "<<data<<endl;
    root->left=builtTree(root);

    cout<<"Enter the data right of "<<data<<endl;
    root->right=builtTree(root);

    return root;
}
void levelOrderTraversal(Node *root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            
            if(temp->left)
            {
                q.push(temp->left);
            }

            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return;
}
int maxHeight(Node *root)
{
    if(!root)
    {
        return 0;
    }
    int leftDepth=maxHeight(root->left);
    int rightDepth=maxHeight(root->right);
    leftDepth++,rightDepth++;
    int ans=max(leftDepth,rightDepth);
    return ans;
}