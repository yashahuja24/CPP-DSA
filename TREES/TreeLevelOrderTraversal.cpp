#include<iostream>
#include<queue>
#include<vector>
#include<stack>
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
void levelOrderTraversal(Node *root);
void inverseLevelOrderTraversal(Node *root);
int main()
{
    Node *root=NULL;
    root=buildTree(root);
    cout<<"Level Order Traversal:-"<<endl;
    levelOrderTraversal(root);
    cout<<"Inverse Level Order Traversal:-"<<endl;
    inverseLevelOrderTraversal(root);
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

    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right=buildTree(root);

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
    cout<<endl;
    return;
}
void inverseLevelOrderTraversal(Node *root)
{
    if(!root)
    {
        return;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    stack<int>s;
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            s.push(-1);
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            s.push(temp->data);
            if(temp->right)
            {
                q.push(temp->right);
            }
            if(temp->left)
            {
                q.push(temp->left);
            }
        }
    }
    // Flag to avoid printing newline at the start
    bool firstLine=true;//in end of the tree NULL is present so it stores -1 in stack at top which leads to line change in starting
    while(!s.empty())
    {
        if(s.top()==-1)
        {
            if(firstLine)
            {
                firstLine=false;
            }
            else
            {
                cout<<endl;
            }
        }
        else
        {
            cout<<s.top()<<" ";
        }
        s.pop();
    }
}
//Test Case
//1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1