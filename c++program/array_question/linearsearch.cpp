#include<iostream>
using namespace std;
void linearsearch(int a[10][15],int r,int c,int k)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if(a[i][j]==k)
           {
               cout<<"number is found at the position"<<i<<j;
           }
        }
    }

}
int main()
{
    int a[10][15];
    int r,c;
    cin>>r>>c;
    cout<<"enter nuber you want to find    ";
    int k;
    cin>>k;
    linearsearch(a,r,c,k);

}
