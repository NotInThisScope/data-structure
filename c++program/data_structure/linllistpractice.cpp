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
 void insertathead2(node*&head,int data)
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
int len(node*head)
{
    int len=0;
    while(head!=NULL)
    {
        head=head->next;
        len+=1;
        return len;
    }
}
void insertattail(node*head,int data)
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
    else if(p>len(head))
    {
        insertattail(head,data);
    }
    else
    {
        //insert at head
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
void deleteathead(node*&head)
{
    if(head==NULL)
    {
        return;
    }
    node*temp=head;
    head=head->next;
    delete temp;
}
void deleteattail(node*&head)
{
    node*prev=NULL;
    node*temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    delete temp;
    prev->next=NULL;
    return;
}
void deleteatmiddle(node*&head,int p)
{
    int jump=1;
    node*temp=head;
    while(jump<p)
    {
        temp=temp->next;
        jump+=1;
    }
    temp->next=temp->next->next;


}
bool searchrecursive(node*&head,int key)
{
    if(head==NULL)
    {
        return false;
    }
    //rec case
    if(head->data==key)
    {
        return true;
    }
    else
    {
      return searchrecursive(head->next,key);
    }
}
bool searchitretative(node*&head,int key)
{
    while(head!=NULL)
    {
        if(head->data==key)
        {
            return true;
        }
        head=head->next;
    }
    return false;
}
void buildlist(node*&head)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        insertattail(head,data);
        cin>>data;
    }
}
void reverse(node*&head)
{
    node*c=head;
    node*p=NULL;
    node*n;
    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
}
void midpoint(node*&head)
{
    if(head==NULL||head->next==NULL)
    {
        return;
    }
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }

}
node*merge(node*a,node*b)
{
    //base case
    if(a==NULL)
    {
        return b;
    }
    else if(b==NULL)
    {
        return a;
    }
    node*c;
    //campare a and b for smaller element
    if(a->data<b->data)
    {
        c=a;
        c->next=merge(a->next,b);
    }
    else
    {
        c=b;
        c->next=merge(a,b->next);
    }
    return c;
}
node* mergesort(node*head)
{
    //base case
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    //rec case
    //1.mid point
    node*mid=midpoint(head);
    node*a=head;
    node*b=mid->next;
    mid->next=NULL;
    //2.recursive sort
    a=mergesort(a);
    b=mergesort(b);
    //3.merge
    node*c=merge(a,b);
    return c;
}
boole detectcyce(node*head)
{
    node*slow=head;
    node*fast=head;
    while(fast!=NULL&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            return true;
        }

    }
    return false;
}


int main()
{
    node*head=NULL;
   /* insertathead(head,5);
    insertathead(head,2);
    insertathead(head,1);
    insertathead(head,8);
    insertathead2(head,650);
    insertathead2(head,0);
    insertathead2(head,122);
    insertathead2(head,897);*/
    //insertatmiddel(head,10,1);
    //insertattail(head,7888);
    //deleteathead(head);
    //deleteattail(head);
    //deleteatmiddle(head,3);
    //cout<<searchitretative(head,8);
    //buildlist(head);
    //reverse(head);
    //node*m=midpoint(head);
    //cout<<m->data;
   cin>>head;
   cout<<head;
   head=mergesort(head);
   cout<<head;
   print(head);
   return 0;
}
