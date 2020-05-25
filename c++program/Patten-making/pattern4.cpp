#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=(n/2+1);
    for(int i=1;i<n;i++){
        for(int j=1;j<(2*a-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        for(int j=1;j<(2*a-i);j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=n;i<=n;i++){
            for(int j=1;j<=(2*n-1);j++){
                cout<<"*";
            }
    }
}
