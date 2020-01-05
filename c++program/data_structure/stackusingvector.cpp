#include<iostream>
#include<vector>
using namespace std;
class stack
{
    vector<int>v;
public:
    void push(int data)
    {
        v.push_back(data);
    }
    bool empty()
    {
        return v.size()==0;
    }
    void pop()
    {
        if(!empty())
        {
            v.pop_back();
        }
    }
    int top()
    {
        if(!empty())
        {
            return v[v.size()-1];
        }
    }
};
int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
