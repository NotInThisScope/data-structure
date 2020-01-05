#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int num=a[i];
        for(j=i-1;j<=0&&a[j]>num;j--)
        {
           a[j+1]=a[j];
        }
        a[j+1]=num;
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
}
int main()
{
    int a[100]={4,1,2,0,3};
    int n=5;
    insertionsort(a,n);
    print(a,n);


}
