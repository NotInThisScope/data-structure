#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    int count=1;
    for(int i=0;i<n;i++)
    {
        cin>>t;
    for(int i=2;i<=100;i++){
        // check for i
        bool isPrime = true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime = false;
            }
        }
        if(isPrime){
            count=count+1;
        }
    }
    }
}
