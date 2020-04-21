#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
#define sortvi(a)   sort(a.begin(),a.end())
#define sortvd(a)   sort(a.begin(),a.end(),greater<int>())

using namespace std;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          long long int n,x;
          cin>>n;
          vector<long long int>con;
          com(i,n)
          {
               cin>>x;
               con.push_back(x);
          }
          com(i,con.size()-1)
          {
               if(con[i]<0 && con[i+1]>0 || con[i]>0 && con[i+1]<0)
                    continue;
               else
               {
                    if(con[i]<0 && con[i+1]<0)
                    {
                         con[i+1]=max(con[i],con[i+1]);
                         con[i]=0;
                    }
                    else if(con[i]>0 && con[i+1]>0)
                    {
                         con[i+1]=max(con[i],con[i+1]);
                         con[i]=0;
                    }
               }
          }
          x=0;
          x=accumulate(con.begin(),con.end(),x);
          cout << x << endl;
     }
}
