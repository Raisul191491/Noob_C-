#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a;
     cin>>a;
     {
          while(1)
          {
               int tot=0,x=a;
               while(x!=0)
               {
                    tot+=x%10;
                    x/=10;
               }
               if(tot%4==0)
               {
                    cout << a << endl;
                    break;
               }
               else
                    a++;
          }
     }

}
