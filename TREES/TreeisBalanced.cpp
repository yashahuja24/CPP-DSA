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
bool isBalanced1(Node *root);//TIME COMPLEXITY O(n^2)
pair<bool,int> isBalanced2(Node *root);//TIME COMPLEXITY O(n)
int main()
{
    Node *root=NULL;
    root=buildTree(root);
    cout<<"Level Order Traversal:-"<<endl;
    levelOrderTraversal(root);
    if(isBalanced1(root))
    {
        cout<<"Binary tree is Balanced"<<endl;
    }
    else
    {
        cout<<"Binary tree is not Balanced"<<endl;
    }
    if(isBalanced2(root).first)
    {
        cout<<"Binary tree is Balanced"<<endl;
    }
    else
    {
        cout<<"Binary tree is not Balanced"<<endl;
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
bool isBalanced1(Node *root)//TIME COMPLEXITY O(n^2)
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
        return isBalanced1(root->left) && isBalanced1(root->right);
    }
}
pair<bool,int> isBalanced2(Node *root)//TIME COMPLEXITY O(n)
{
    if(!root)
    {
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    
    pair<bool,int>left=isBalanced2(root->left);
    pair<bool,int>right=isBalanced2(root->right);
    pair<bool,int>ans;
    ans.second=max(left.second,right.second)+1;
    if(abs(left.second-right.second)<=1 && left.first && right.first)
    {
        ans.first=true;
    }
    else
    {
        ans.first=false;
    }
    return ans;
}