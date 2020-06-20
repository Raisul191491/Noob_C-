#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr            first
#define sc            second
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n,x=INT_MIN,y=INT_MAX;
          cin>>n;
          int choc[n+1],bo[n+1];
          dom(i,n)
          {
               cin>>choc[i];
               bo[i]=choc[i];
          }
          sort(bo+1,bo+1+n);
          int mx=bo[n];
          //cout << mx << endl;
          dom(i,n)
          {
               if(choc[i]==mx)
               {
                    x=i;
                    break;
               }
          }
          for(int i=n;i>=x;i--)
          {
               if(choc[i]==mx)
               {
                    y=i;
                    break;
               }
          }
          if(y-x>n/2)
               cout << "0\n";
          else
               cout << n/2-(y-x) << endl;
     }
}
