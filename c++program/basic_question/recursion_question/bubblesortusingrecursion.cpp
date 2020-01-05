#include<iostream>
using namespace std;
void bubblesort(int arr[],int n,int i){
    if(n==0)
    {
        return;
    }
    for(int j=0;j<n-1;j++)
    {
        if arr[j]>arr[j+1]{
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    bubblesort(arr ,n-1);
    return;
}
int main()
{
    int arr[100]={7,3,5,1,2};
    bubblesort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}
