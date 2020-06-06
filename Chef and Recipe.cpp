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
        int n,con[1001]= {0},pos[1001]= {0},flag=0;
        cin>>n;
        int a[n];
        com(i,n)
        {
            cin>>a[i];
            con[a[i]]++;
        }
        sortD(con,1001);
        com(i,n-1)
        {
            if(con[i+1]!=0 && con[i]!=0 && con[i]==con[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            pos[a[0]]++;
            dom(i,n-1)
            {
                if(a[i-1]!=a[i] && pos[a[i]]>0)
                {
                    flag=1;
                    break;
                }
                else
                    pos[a[i]]++;
            }
        }
        if(flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
