#include<iostream>
#include<queue>
// #include<stdlib.h>
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
Node *builtTree(Node *root);
void levelOrderTraversal(Node *root);
pair<bool,int> checkSum(Node *root);
int main()
{
    Node *root=NULL;
    root=builtTree(root);
    cout<<"Level Order Traversal:-"<<endl;
    levelOrderTraversal(root);
    if(checkSum(root).first)
    {
        cout<<"Sum of left and right is equal to the root";
    }
    else
    {
        cout<<"Sum of left and right is not equal to the root";
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
pair<bool,int>checkSum(Node *root)
{
    if(!root)
    {
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    if(!root->left && !root->right)//leaf node condition
    {
        pair<bool,int>p=make_pair(true,root->data);
        return p;
    }
    pair<bool,int>leftAns=checkSum(root->left);
    pair<bool,int>rightAns=checkSum(root->right);
    pair<bool,int>ans;
    bool condition= (root->data==(leftAns.second+rightAns.second))?true:false;
    if(leftAns.first && rightAns.first && condition)
    {
        ans.first=true;
        ans.second=root->data*2;//same as root->data+leftAns.second+rightAns.second
    }
    else
    {
        ans.first=false;
        ans.second=root->data+leftAns.second+rightAns.second;
    }
    return ans;
}