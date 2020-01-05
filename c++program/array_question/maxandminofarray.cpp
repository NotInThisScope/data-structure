#include<iostream>
using namespace std;
int main()
{
    int n,maxnum=-1000000,minnum=10000000,currentsum=0;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        currentsum=0;
        currentsum+=a[i];
        if(currentsum>maxnum)
        {
            maxnum=max(currentsum,maxnum);
        }
        else if(currentsum<minnum);
        {
            minnum=min(currentsum,minnum);
        }

    }
    cout<<"minnum is= "<<minnum<<endl;
    cout<<"maxnum is= "<<maxnum<<endl;
    return 0;
}
