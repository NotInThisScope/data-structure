#include<iostream>
using namespace std;
void odd(int n)
{
    //base case
    if(n==0)
    {
        return ;
    }
    if(n%2!=0)
    {
        cout<<n<<endl;
    }
    odd(n-1);
}
void even(int n)
{
    if(n==0)
    {
        return ;
    }
    even(n-1);
    if(n%2==0)
    {
        cout<<n<<endl;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    odd(n);
    even(n);
}
