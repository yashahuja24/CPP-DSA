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
Node* buildTree(Node *root);
void levelOrderTraversal(Node *root);
int Diameter1(Node *root);//TIME COMPLEXITY: O(n^2)
pair<int,int> Diameter2(Node *root);//TIME COMPLEXITY: O(n)
int maxHeight(Node *root);
int main()
{
    Node *root=NULL;
    root=buildTree(root);
    cout<<"Level Order Traversal:-"<<endl;
    levelOrderTraversal(root);
    cout<<"Diameter of Tree by Diameter 1 is: "<<Diameter1(root)<<endl;
    cout<<"Diameter of Tree by Diameter 2 is: "<<Diameter2(root).first<<endl;
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
int Diameter1(Node *root)//TIME COMPLEXITY: O(n^2)
{
    if(!root)
    {
        return 0;
    }
    int opt1=Diameter1(root->left);//answer found in left subtree
    int opt2=Diameter1(root->right);//answer found in right subtree

    int opt3=maxHeight(root->left)+maxHeight(root->right)+1;//answer is height of left subtree + right subtree +root(1) 

    int ans=max(opt1,max(opt2,opt3));//formula to find diameter , is max of above 3 options
    return ans;
}
pair<int,int>Diameter2(Node *root)//TIME COMPLEXITY: O(n)
{
    if(!root)
    {
        pair<int,int>p=make_pair(0,0);//first depicts diameter , second depicts height
        return p;
    }
    pair<int,int>left=Diameter2(root->left);
    pair<int,int>right=Diameter2(root->right);

    int opt1=left.first;//answer found in left subtree
    int opt2=right.first;//answer found in right subtree

    int opt3=left.second+right.second+1;//answer is height of left subtree + right subtree +root(1) 

    pair<int,int>ans;
    ans.first=max(opt1,max(opt2,opt3));//formula to find diameter , is max of above 3 options
    ans.second=max(left.second,right.second)+1;//formula to find height of tree
    return ans;
}
