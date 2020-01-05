#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int a[10]={8,6,3,4,5};
    for(int i=0;i<n;i++)
    {
        int min=a[i];
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                minindex=j;
            }
        }
        a[minindex]=a[i];
        a[i]=min;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
