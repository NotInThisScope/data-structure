#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0 && x%4==0)
        {
            cout<<"Yes";
        }
        else if(x%2!=0 && x%3==0)
        {
               cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
        cout<<'\n';
    }
}
