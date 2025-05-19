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
        this->left=NULL;
        this->right=NULL;
    }
};
Node* buildTreeFronLevelOrder(Node *root);
void levelOrderTraversal(Node *root);
int main()
{
    Node *root=NULL;
    root=buildTreeFronLevelOrder(root);
    cout<<"Level order Traversal:-"<<endl;
    levelOrderTraversal(root);
    return 0;
}
Node* buildTreeFronLevelOrder(Node *root)
{
    int data;
    cout<<"Enter the data for Root: ";
    cin>>data;
    root=new Node(data);
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        cout<<"Enter left node of "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1)
        {
            temp->left=new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node of "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1)
        {
            temp->right=new Node(rightData);
            q.push(temp->right);
        }
    }
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
//Test Case
//1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1