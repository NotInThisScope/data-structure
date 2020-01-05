#include<iostream>
using namespace std;
int tow(int n,char start,char dest,char helper)
{
    if(n==0)
    {
        return 0 ;
    }
    //place n-1 disk to source to helper
    tow(n-1,start,helper,dest);
    cout<<"Moving ring "<<n<<" from "<<start<<" to "<<dest<<endl;
    //moving n-1 disk to helper to dest
    tow(n-1,helper,dest,start);

}
int main()
{
    int n;
    cin>>n;
    tow(n,'A','B','C');
    return 0;
}
