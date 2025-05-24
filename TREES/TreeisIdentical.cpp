#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node *builtTree(Node *root);
void levelOrderTraversal(Node *root);
bool isIdentical1(Node *root1,Node* root2);//TIME COMPLEXITY O(n)
bool isIdentical2(Node *root1,Node* root2);//TIME COMPLEXITY O(n)
int main()
{
    Node *root1=NULL;
    cout<<"Enter data for root 1:-"<<endl;
    root1=builtTree(root1);
    cout<<"Level Order Traversal for root 1:-"<<endl;
    levelOrderTraversal(root1);
    Node *root2=NULL;
    cout<<"Enter data for root 2:-"<<endl;
    root2=builtTree(root2);
    cout<<"Level Order Traversal for root 2:-"<<endl;
    levelOrderTraversal(root2);
    if(isIdentical1(root1,root2))
    {
        cout<<"Both the binary trees are Identical"<<endl;
    }
    else
    {
        cout<<"Both the binary trees are non Identical"<<endl;
    }
    if(isIdentical2(root1,root2))
    {
        cout<<"Both the binary trees are Identical"<<endl;
    }
    else
    {
        cout<<"Both the binary trees are non Identical"<<endl;
    }
    return 0;
}
Node *builtTree(Node *root)
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
    root->left=builtTree(root);

    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right=builtTree(root);

    return root;
}
void levelOrderTraversal(Node *root)
{
    if(!root)
    {
        return;
    }
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
bool isIdentical1(Node *root1,Node *root2)//TIME COMPLEXITY O(n)
{
    if(!root1 && !root2)
    {
        return true;
    }
    if(!root1 || !root2)
    {
        return false;
    }
    if(root1->data==root2->data)
    {
        return isIdentical1(root1->left,root2->left) && isIdentical1(root1->right,root2->right);
    }
    return false;
}
bool isIdentical2(Node *root1,Node *root2)//TIME COMPLEXITY O(n)
{
    queue<Node*>q1;
    queue<Node*>q2;

    q1.push(root1);
    q2.push(root2);
    while(!q1.empty() && !q2.empty())
    {
        Node *temp1=q1.front();
        q1.pop();
        Node *temp2=q2.front();
        q2.pop();
        if(!temp1 && !temp2)
        {
            continue;
        }
        if(!temp1 || !temp2)
        {
            return false;
        }
        if(temp1->data!=temp2->data)
        {
            return false;
        }
        q1.push(temp1->left);
        q1.push(temp1->right);
        q2.push(temp2->left);
        q2.push(temp2->right);
    }
    return q1.empty() && q2.empty();
}