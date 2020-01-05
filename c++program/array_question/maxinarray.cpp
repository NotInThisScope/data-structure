#include<iostream>
using namespace std;
int main()
{
    int n,currentsum=0,maxsum=-10000000000;
    cin>>n;
    int ar[10000];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        currentsum=0;
        currentsum+=ar[i];
        if(currentsum>maxsum)
        {
            maxsum=max(currentsum,maxsum);
        }
    }
    cout<<maxsum<<endl;
    return 0;

}
