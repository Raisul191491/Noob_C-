#include<bits/stdc++.h>
using namespace std;
int main()
{
     char ara1[10000],ara2[10000];
     gets(ara1);
     gets(ara2);
     for(int i=0;i<strlen(ara1);i++)
     {
          if(ara1[i]==ara2[i])
          {
               cout<< "0";
          }
          else
               cout<< "1";
     }
}
