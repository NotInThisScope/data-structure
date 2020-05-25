
#include<iostream>
using namespace std;
int main()
{
    int n=5;
     int a=n/2+1;
     for(int i=1;i<=a;i++)
     {
         for(int j=1;j<=a-i;j++)
         {
             cout<<" ";
         }
         for(int j=1;j<=2*i-1;j++)
         {
             cout<<"*";
         }
          for(int j=1;j<=a-i;j++)
         {
             cout<<" ";
         }
         cout<<'\n';

     }
     return 0;
}
