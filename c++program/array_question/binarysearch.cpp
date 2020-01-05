#include<iostream>
using namespace std;
int isbinary(int a[],int n,int k)
{
    int start=0,e=n-1;
    int mid;
    while(start<=e)
    {
        mid=(start+e)/2;
        if(a[mid]==k)
        {
            return mid ;
        }
        else if(a[mid>k])
        {
            e=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
return -1;

}

int main()
{

    int a[100]={1,3,5,10,12,15,17};
    int n=sizeof(a)/sizeof(int);
    int k;
    cin>>k;
    int searchindex=isbinary(a,n,k);
    if(searchindex==-1)
    {
        cout<<"not found";
    }
    else
    {
        cout<<"found at index "<<searchindex<<endl;
    }
}
