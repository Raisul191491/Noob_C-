#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,c,app=0;
     cin>>n>>c;
     int word[n];
     for(int i=0;i<n;i++)
     {
          cin>>word[i];
     }
     for(int i=0;i<n-1;i++)
     {
          if(word[i+1]-word[i]<=c)
          {
               app++;
          }
          else
               app=0;
     }
     cout << app+1 <<endl;

}
