#include<iostream>
using namespace std;
int main() {
    int n=1,n1,n2,count;
    cin>>n1>>n2;
    count=0;
    while(count<n1)
    {
        if((3*n+2)%n2!=0)
        {
            cout<<3*n+2<<endl;
            n++;
            count++;
        }
        else{
            n++;
        }
    }
	return 0;
}
