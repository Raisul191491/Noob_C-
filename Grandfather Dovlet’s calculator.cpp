#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,rem,sum=0;
     cin>>a>>b;
     while(a<=b)
     {
          int k=a;
          while(k!=0)
          {
               rem=k%10;
               k=k/10;
               if(rem==0 || rem==6 || rem==9)
               {
                    sum+=6;
               }
               else if(rem==4)
               {
                    sum+=4;
               }
               else if(rem==1)
               {
                    sum+=2;
               }
               else if(rem==1)
               {
                    sum+=2;
               }
               else if(rem==7)
               {
                    sum+=3;
               }
               else if(rem==8)
               {
                    sum+=7;
               }
               else
               {
                    sum+=5;
               }
          }
          a++;
     }
     cout<< sum << endl;
}
