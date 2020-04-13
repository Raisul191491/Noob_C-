#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,flag;
     cin>>n;
     int card[n];
     for(int i=0;i<n;i++)
     {
          cin>>card[i];
     }
     sort(card,card+n);
     for(int i=0;i<(n/2)-1;i++)
     {
          if(card[i]!=card[i+1])
          {
               flag=0;
               break;
          }
          else
               flag=1;
     }
     if(flag==0)
     {
          cout << "NO" <<endl;
          return 0;
     }
     for(int i=n/2;i<n-1;i++)
     {
          if(card[i]!=card[i+1])
          {
               flag=0;
               break;
          }
          else
               flag=1;
     }
     if(flag==0 || card[0]==card[n/2])
     {
          cout << "NO" <<endl;
     }
     else
     {
          cout << "YES" <<endl;
          cout << card[0] << " " << card[n/2] <<endl;
     }


}
