#include<iostream>
using namespace std;
int reversdigits(int n)
{
    int rev_n=0;
    while(n>0)
    {
        rev_n=rev_n*10+n%10;
        n=n/10;
    }
    return rev_n;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n1;
        int n2;
        cin>>n1>>n2;
        int sum=reversdigits(n1)+reversdigits(n2);
        cout<<reversdigits(sum)<<endl;
    }
    return 0;
}
