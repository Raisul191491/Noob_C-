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
#define endl          '\n'
using namespace std;
int main()
{

    fast
    int t;
    cin>>t;
    com(i,t)
    {
        ll n,k,x,flag=0;
        cin>>n>>k;
        ll mp[1001]={0};
        com(i,n)
        {
            cin>>x;
            int y=0;
            while(x>0)
            {
                mp[y]+=x%k;
                x/=k;
                y++;
            }
        }
        com(i,1001)
        {
            if(mp[i]>1)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
