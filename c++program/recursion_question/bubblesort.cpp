#include<iostream>
using namespace std;
int bubblesort(int n,int *a,int i)
{
    if(n==1)
    {
        return 0;
    }
    if (a[i]>a[i+1]);
    swap(a[i],a[i+1]);
    bubblesort(n-1,a,i+1);
    return 0;


}
int main()
{
    int n=5;
    int a[100]={5,7,0,8,4};
    cout<<bubblesort(n,a,0);
    return 0;
}

