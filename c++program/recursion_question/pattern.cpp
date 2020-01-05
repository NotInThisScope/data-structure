#include<iostream>
using namespace std;
void pattern(int n,int i)
{
    if(n==0)
    {
        return  ;
    }
    //recursive case
    pattern(n-1,i);{
    cout<<"*"<<endl;
     pattern(n,i+1);
    }
    return;

}
int main() {
    int n;
    cin>>n;
    pattern(n,1);
	return 0;
}
