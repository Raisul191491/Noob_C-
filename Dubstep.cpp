#include<bits/stdc++.h>
using namespace std;
int main()
{
     char ara[200];
     gets(ara);
     for(int i=0;i<strlen(ara);i++)
     {
          if(ara[i]=='W' && ara[i+1]=='U' && ara[i+2]=='B')
          {
               i+=2;
               continue;
          }
          else
               cout << ara[i];
          if(ara[i+1]=='W' && ara[i+2]=='U' && ara[i+3]=='B')
               cout << " ";
     }
}
