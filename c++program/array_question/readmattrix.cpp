#include<iostream>
using namespace std;
void readmatrix(int a[10][10],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];

        }
    }
}
void printmatrix(int a[10][10],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
void waveprint(int a[][10],int r,int c)
{
    for(int j=0;j<c;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<=r-1;i++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        {
            for(int i=r-1;i>=0;i--)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
}
void staircasesearch(int a[][10],int r,int c,int key)
{
    int i=0,j=c-1;
    while(i<r&&j>=0)
    {
        if(a[i][j]==key)
        {
            cout<<"found on the position"<<i<<"and"<<j<<endl;
            return ;
        }
        else if(a[i][j]>key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<"not found";
}
int main()
{
    int a[10][10];
    int r,c;
    cin>>r>>c;
    readmatrix(a,r,c);
    printmatrix(a,r,c);
    waveprint(a,r,c);
    int key;
    cout<<"enter key to find";
    cin>>key;
    staircasesearch(a,r,c,key);
    return 0;
}
