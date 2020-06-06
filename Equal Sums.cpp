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
vector<pair<ll,pair<ll,ll>>>pos;

int main()
{
    int k;
    cin>>k;
    int n,sum=0,flag=0;
    com(i,k)
    {
        sum=0;
        cin>>n;
        vector<ll>odd(n);
        com(j,n)
        {
            cin>>odd[j];
            sum+=odd[j];
        }
        com(j,n)
        {
            pos.push_back(make_pair(sum-odd[j],make_pair(j,i)));
        }
    }
    sortvi(pos);
    com(i,pos.size()-1)
    {
        if(pos[i].fr==pos[i+1].fr && pos[i].sc.sc!=pos[i+1].sc.sc)
        {
            cout << "YES\n";
            cout << pos[i].sc.sc+1 << " " << pos[i].sc.fr+1 << endl;
            cout << pos[i+1].sc.sc+1 << " " << pos[i+1].sc.fr+1 << endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout << "NO\n";
    }
}
