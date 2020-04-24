#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
#define sortvi(a)   sort(a.begin(),a.end())
#define sortvd(a)   sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          int n,x,y;
          float sum=0,cnt;
          cin>>n>>x;
          vector<int>rub;
          com(i,n)
          {
               cin>>y;
               rub.push_back(y);
          }
          sortvi(rub);
          cnt=rub.size();
          sum=sumall(rub,sum);
          com(i,rub.size())
          {
               if(sum/cnt>=x)
               {
                    break;
               }
               else
               {
                    sum-=rub[i];
                    cnt--;
               }
          }
          cout << cnt << endl;
     }
}
