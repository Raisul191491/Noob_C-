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

void solve()
{
    int n,col=0,x;
    cin>>n;
    int prime[]= {2,3,5,7,11,13,17,19,23,29,31};
    vector<int>cnt,str(32,0);
    vector<bool>by(32,false);
    com(i,n)
    {
        cin>>x;
        com(j,11)
        {
            if(x%prime[j]==0)
            {
                if(by[prime[j]]==false)
                {
                    col++;
                    str[prime[j]]=col;
                    by[prime[j]]=true;
                    cnt.push_back(col);
                }
                else
                {
                    cnt.push_back(str[prime[j]]);
                }
                break;
            }
        }
    }
    cout << count(by.begin(),by.end(),true) << endl;
    com(i,cnt.size()) cout << cnt[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
