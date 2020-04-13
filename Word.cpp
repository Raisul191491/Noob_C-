#include<bits/stdc++.h>
using namespace std;
int main()
{
     char ara[100];
     gets(ara);
     int up=0,down=0;
     for(int i=0;i<strlen(ara);i++)
     {
          if(islower(ara[i]))
          {
               down++;
          }
          else
               up++;
     }
     if(down>=up)
     {
          for(int i=0;i<strlen(ara);i++)
          {
               putchar(tolower(ara[i]));
          }
     }
     else
          for(int i=0;i<strlen(ara);i++)
               putchar(toupper(ara[i]));
}
