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
map<ll,ll>mp;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        int n,flag=0;
        cin>>n;
        char a[n][n];
        com(i,n)
        {
            com(j,n)
            {
                cin>>a[i][j];
            }
        }
        com(i,n)
        {
            com(j,n)
            {
                if(a[i][j]=='1' && i<n-1 && j<n-1)
                {
                    if(a[i][j+1]=='0' && a[i+1][j]=='0')
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag)
            {
                cout << "NO\n";
                break;
            }
        }
        if(flag==0)
            cout << "YES\n";

    }
}
