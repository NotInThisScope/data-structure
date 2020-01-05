#include<iostream>
using namespace std;
int triling(int h,int l)
{
    if(l==0)
    {
        return 0;
    }
   int small=triling(l-1);
   int large=triling(l-4);
   int add=small+large;
   return add;

}
int main()
{
    int h=4,l;
    cin>>l;
    cout<<triling(h,l);
}
