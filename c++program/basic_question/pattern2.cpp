#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=n/2;
    for(int i=0;i<1;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
    }
    cout<<'\n';
    for(int i=1;i<=a;i++)
    {
        for(int j=i;j<=a;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<" ";
        }
        for(int j=i;j<=a;j++)
        {
            cout<<"*";
        }
        cout<<'\n';
    }
    for(int i=a+1;i<n-1;i++)
    {
        for(int j=1;j<=(i-2);j++)
        {
            cout<<"*";
        }
        for(int j=)
    }
}
