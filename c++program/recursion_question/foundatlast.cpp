#include<iostream>
using namespace std;
int foundatlast(int *a,int i,int n,int key)
{
    if(n==i)
    {
        return -1;
    }
    if(a[i]==key)
    {
        return i;
    }
    foundatlast(a,i+1,n,key);
    return;

}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<foundatlast(a,0,n,key);
    return 0;

}
