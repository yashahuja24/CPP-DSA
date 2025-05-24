#include<iostream>
#include<queue>
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
        this->left=left;
        this->right=right;
    }
};
Node* builtTree(Node* root);
void levelOrderTraversal(Node* root);
void sumOfLeftNodes(Node* root,int& count);//TIME COMPLEXITY O(n)
int main()
{
    Node *root=NULL;
    root=builtTree(root);
    cout<<"Level Order Trversal:-"<<endl;
    levelOrderTraversal(root);
    int count=0;
    sumOfLeftNodes(root,count);
    cout<<"Sum of Left Nodes: "<<count<<endl;
    return 0;
}
Node* builtTree(Node* root)
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
void levelOrderTraversal(Node* root)
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
void sumOfLeftNodes(Node* root,int& count)
{
    if(!root)
    {
        return;
    }
    if(root->left)
    {
        count+=root->left->data;
    }
    sumOfLeftNodes(root->left,count);
    sumOfLeftNodes(root->right,count);
}
//Test Case
//1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1