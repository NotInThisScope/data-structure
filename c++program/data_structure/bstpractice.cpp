#include<iostream>
#include<queue>
using namespace std;
class node
{
public:
    int data;
    node*left;
    node*right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node*buildtree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    node*root=new node(d);
    root->left=buildtree();
    root->right=buildtree();
    return root;
}
void print(node*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
void printin(node*root)
{
    if(root==NULL)
    {
        return;
    }
    printin(root->left);
    cout<<root->data<<" ";
    printin(root->right);
}
void printpost(node*root)
{
    if(root==NULL)
    {
        return;
    }
    printpost(root->left);
    printpost(root->right);
    cout<<root->data<<" ";
}
int height(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ls=height(root->left);
    int rs=height(root->right);
    return max(ls,rs)+1;
}
void printkthlevel(node*root,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }
    printkthlevel(root->left,k-1);
    printkthlevel(root->right,k-1);
}
void printalllevel(node*root)
{
    int H=height(root);
    for(int i=1;i<=H;i++)
    {
        printkthlevel(root,i);
        cout<<endl;
    }
}
void bfs(node*root)
{
    queue<node*>q;
     q.push(root);
     while(!q.empty())
     {
         node*f
     }
}

int main()
{
    node*root=buildtree();
    print(root);
    cout<<endl;
    printin(root);
    cout<<endl;
    printpost(root);
    cout<<endl;
   printalllevel(root);
}
