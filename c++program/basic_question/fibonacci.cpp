#include <iostream>

using namespace std;  

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin>>n;
    
    int a=0,b=1,sum=a+b;
    
    while(a<=n)
    {
        cout<<a;
        a=b;
        b=sum;
        sum=a+b;
    }
    a++;
}
