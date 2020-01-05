#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*next;
    //constructor
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
void printhead(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main()
{
    node*head=NULL;
    insertathead(head,25);
    insertathead(head,0);
    insertathead(head,75);
    printhead(head);

}
