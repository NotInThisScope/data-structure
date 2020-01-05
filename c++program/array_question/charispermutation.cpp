#include<iostream>
#include<string.h>
using namespace std;
    bool ispermutation(char*a1,char*a2)
{
    int l1=strlen(a1);
    int l2=strlen(a2);
    if(l1!=l2)
    {
        return false;
    }
    int freq[26]={0};
    for(int i=0;i<l1;i++)
    {
        freq[a1[i]-'a']++;
    }
    for(int i=0;i<l2;i++)
    {
        freq[a2[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            return false;
        }
    }
    return true;


}
int main()
{
   char a1[100],a2[100];
   int n=6;d

   for(int i=0;i<n;i++)
   {
        cin>>a1[i]>>a2[i];
   }
   if(ispermutation(a1,a2))
   {
       cout<<"YES PERMUTATION";
   }
   else
   {
       cout<<"NOT PERMUTATION";
   }
}
