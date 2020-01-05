#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void insertathead(node*&head,int data)
{
    node*n=new node(data);
    n->next=head;
    head=n;
}
void print(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int length(node*head)
{
    int len=0;
    while(head!=NULL)
    {
        head=head->next;
        len+=1;
    }
    return len;
}
void insertattail(node*&head,int data)
{
    if(head==NULL)
    {
        head=new node(data);
        return;
    }
    node*tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->next=new node(data);
}
void insertatmiddel(node*&head,int data,int p)
{
    if(head==NULL||p==0)
    {
      insertathead(head,data);
    }
    else if(p>length(head))
    {
        insertattail(head,data);
    }
    else
    {
        //insert at middel
        int jump=1;
        node*temp=head;
        while(jump<=p-1)
        {
           temp=temp->next;
           jump+=1;
        }
        node*n=new node(data);
        n->next=temp->next;
        temp->next=n;
    }
}
void deleteatmiddel(node*&head,int p)
{
    node*prev=NULL;
    node*temp=head;
    int jump=1;
    while(jump<=p)
    {
        prev=temp;
        temp=temp->next;
        jump+=1;
    }
    prev->next=temp->next;
    delete temp;
    return;

}
bool searchrecursive(node*head,int key)
{
    if(head==NULL)
    {
        return false;
    }
    if(head->data==key)
    {
        return true;
    }
    else
    {
        return searchrecursive(head->next,key);
    }
}
int main()
{
    node*head=NULL;
    insertathead(head,4);
    insertathead(head,5);
    insertathead(head,9);
    insertathead(head,8);
    insertattail(head,97);
    deleteatmiddel(head,3);
    searchrecursive(head,5);
    print(head);

}
