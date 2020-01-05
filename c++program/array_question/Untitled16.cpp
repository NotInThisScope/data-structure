#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]==k)
        {
            cout<<"found";
            return 0;
        }
    }
    cout<<"NOT FOUND";
}

