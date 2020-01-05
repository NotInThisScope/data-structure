#include<iostream>
using namespace std;
template<typename T>
struct node
{
    T data;
    node*next;
    node(T data)
    {
        this->data=data;
        next=NULL;
    }
};
template<typename X>
struct stack
{
    node<X>*head;
    int currsize;
public:
    stack()
    {
        head=NULL;
        currsize=0;
    }
    bool isempty()
    {
        return head=NULL;
    }
    int size()
    {
        return currsize;
    }
    void push(X data)
    {
        node<X>*temp=new node<X>(data);
        temp->next=head;
        head=temp;
        currsize++;
        return;
    }
    void pop()
    {
        if(!isempty())
        {
            node<X>*temp=head;
            head=head->next;
            delete temp;
            currsize--;
        }
    }
    X top()
    {
        if(!isempty())
        {
            return head->data;
        }
        return -1;
    }

};
int main()
{
    stack<int>s;
    s.push(10);
    s.push(50);
    s.push(85);
    while(!s.isempty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
