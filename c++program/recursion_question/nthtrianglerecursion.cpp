#include<iostream>
using namespace std;
int printtriangle(int n)
{
    if(n==0)
    {
        return 0;
    }
    int f1=n+printtriangle(n-1);
    return(f1);

}
int main()
{
    int n;
    cin>>n;
    cout<<printtriangle(n);
}


