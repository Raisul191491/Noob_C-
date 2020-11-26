#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fr            first
#define sc            second
#define lcm(a,b)      (a*b)/__gcd(a,b)
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
    int t;
    cin>>t;
    com(i,t)
    {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        com(i,q)
        {
            int l,r;
            cin>>l>>r;
            l-=1;
            r-=1;
            if(r-l==0)
                cout << "NO" << endl;
            else
            {
                int f=0;
                for(int j=0; j<l; j++)
                {
                    if(s[j]==s[l])
                    {
                        f=1;
                        break;
                    }
                }
                for(int j=r+1; j<n; j++)
                {
                    if(s[j]==s[r])
                    {
                        f=1;
                        break;
                    }
                }
                if(f)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
}
