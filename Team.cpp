#include<bits/stdc++.h>
typedef long long     ll;
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
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m>2*n+2 || n>m+1)
    {
        cout << -1 << endl;
        return 0;
    }
    while(n>0 || m>0)
    {
        if(m>n)
        {
            if(n+2<=m)
            {
                cout << 11;
                m-=2;
            }
            else
            {
                 cout << 1;
                 m--;
            }
            if(n>0)
            {
                 cout << 0;
                 n--;
            }
        }
        else
        {
             if(n>0)
             {
                  cout << 0;
                  n--;
             }
             if(m>0)
             {
                  cout << 1;
                  m--;
             }
        }
    }
}
