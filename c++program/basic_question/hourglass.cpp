#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<2;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
    }
    cout<<'\n';
    for(int i=2;i<=n-1;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<2;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=n-2;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<2;j++)
        {
            cout<<"*";
        }
        cout<<'\n';
    }
    for(int i=1;i<2;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
    }
    return 0;
}
