#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    while(i<=n)
    {
        int j=2;
        bool is prime=true;
        while(J<1){
            if(i%j==0)
            {
                is prime==false;
            }
            j=j+1;
        }
        if(is prime==true)
        {
            cout<<i<<endl;
        }
        i=i+1;
    }
}
