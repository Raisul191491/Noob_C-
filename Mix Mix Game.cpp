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
    com(i,t)
    {
        ll n,z1,z2,sum,flag=0,win;
        cin>>n>>z1>>z2;
        vector<ll>pos(n*2);
        com(i,n)
        {
            int x;
            cin>>x;
            pos[i]=x;
            pos[i+n]=(-1)*x;
        }
        com(i,pos.size())
        {
            if(pos[i]==z1 || pos[i]==z2)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cout << 1 << endl;
        }
        else
        {
            com(i,pos.size())
            {
                bool c=false;
                com(j,pos.size())
                {
                    sum=pos[i]+pos[j];
                    if(sum==z1 || sum==z2)
                    {
                        c=true;
                        break;
                    }
                }
                if(c==false)
                {
                    win=0;
                    break;
                }
                else
                    win=2;
            }
            cout << win << endl;
        }
    }
}
