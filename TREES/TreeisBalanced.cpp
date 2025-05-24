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
Node* buildTree(Node *root);
void levelOrderTraversal(Node *root);
void inverseLevelOrderTraversal(Node *root);
int maxHeight(Node *root);
bool isBalanced(Node *root);
int main()
{
    Node *root=NULL;
    root=buildTree(root);
    cout<<"Level Order Traversal:-"<<endl;
    levelOrderTraversal(root);
    if(isBalanced(root))
    {
        cout<<"Binary tree is Balanced";
    }
    else
    {
        cout<<"Binary tree is not Balanced";
    }
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
bool isBalanced(Node *root)
{
    if(!root)
    {
        return true;
    }
    int Lheight=maxHeight(root->left);
    int Rheight=maxHeight(root->right);
    Lheight++,Rheight++;

    if(abs(Lheight-Rheight)>1)
    {
        return false;
    }
    else
    {
        return isBalanced(root->left) && isBalanced(root->right);
    }
}