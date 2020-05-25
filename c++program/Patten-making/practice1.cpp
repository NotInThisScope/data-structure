#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
    {
        for(int i=n;i>=1;i-=2)
        {
            cout<<i<<endl;
        }
        for(int i=2;i<=n-1;i+=2)
        {
            cout<<i<<endl;
        }
    }
    if(n%2==0)
    {
        for(int i=n-1;i>=1;i=i-2)
        {
            cout<<i<<endl;
        }
        for(int i=2;i<=10;i=i+2)
        {
            cout<<i<<endl;
        }
    }
}
