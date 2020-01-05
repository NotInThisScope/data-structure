#include<iostream>
using namespace std;
int multiply(int x,int y)
{
    if(x==0||y==0)
    {
        return 0;
    }
    return multiply(x,y-1)+x;

}
int main()
{
    int x,y;
    cin>>x>>y;
   cout<<multiply(x,y);
   return 0;

}
