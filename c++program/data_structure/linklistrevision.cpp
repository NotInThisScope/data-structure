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
void insertatnode(node*&head,int data)
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


int main()
{
    node*head=NULL;
    insertatnode(head,6);
    insertatnode(head,5);
    insertatnode(head,7);
    print(head);

}
