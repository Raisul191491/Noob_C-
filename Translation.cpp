#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ara1[1000],ara2[1000];
    gets(ara1);
    gets(ara2);
    for(int i=0,j=strlen(ara2)-1; i<strlen(ara2),j>i; i++,j--)
    {
          swap(ara2[i],ara2[j]);
    }
    if(strcmp(ara1,ara2)==0)
    {
         cout<< "YES" << endl;
    }
    else
     cout<< "NO" <<endl;
}
