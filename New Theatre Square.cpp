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
#define pi            3.14159265358979323846264338327950
using namespace std;
map<ll,ll>mp;
int main()
{
    int q;
    cin>>q;
    com(i,q)
    {
        int n,m,x,y,cnt=0,pr=0,flag=0;
        cin>>n>>m>>x>>y;
        char a[n][m];
        vector<int>pos;
        com(i,n)
        {
            com(j,m) cin>>a[i][j];
        }
        com(i,n)
        {
            cnt=0;
            com(j,m)
            {
                if(a[i][j]=='.')
                    cnt++;
                else
                {
                    pos.push_back(cnt);
                    cnt=0;
                }
            }
            pos.push_back(cnt);
        }
        com(i,pos.size())
        {
            if(x*2>y)
            {
                pr+=((pos[i]/2)*y+(pos[i]%2)*x);
            }
            else
            {
                pr+=pos[i]*x;
            }
        }
        cout << pr << endl;
    }
}
