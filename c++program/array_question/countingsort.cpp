#include<iostream>
using namespace std;
int main()
{
    int a[100]={3,5,2,6,1,4,3};
    int n=7;
    int freq[1000]={0};
    for(int i=0;i<n;i++)
    {
        freq[a[i]]+=1;
    }
    for(int i=0 && freq[i]!=0;i<7;i++)
    {
        swap(a[i],i);
        freq[i]-=1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;

}
