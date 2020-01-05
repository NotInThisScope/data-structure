#include<iostream>
#include<string.h>
using namespace std;
void rotate(char*a , int k)
{
    int i=strlen(a);
    while(i>=0)
    a[i+k]=a[i];
    i--;
}
 int i=strlen(a);
 int j=i-k;
 int s=0;
while(j<i)
{
    a[s]=a[j];
    s++;
    j++;
}
a[i-k]='\0';
int main()
{
    char a[1000]="hello";
    int k=2;
    rotate(a,k);
    cout<<a<<endl;


}
