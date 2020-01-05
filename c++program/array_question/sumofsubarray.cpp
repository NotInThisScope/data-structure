#include<iostream>
using namespace std;
int main(){
    int n;
    int currentsum=0;
    int maxsum=0;
    cin>>n;
    int ar[1000];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
     {
            for(int j=i;j<n;j++)
            {
                currentsum=0;
                for(int k=i;k<=j;k++)
                {
                    currentsum+=ar[k];
                }
                if(maxsum<currentsum)
                {
                    maxsum=currentsum;
                }
            }
       }
        cout<<maxsum;
}
