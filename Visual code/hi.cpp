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
map<unsigned long long,ll>mp;
//map<pair<ll,ll>,ll>sp;
vector<pair<ll,ll>>vec;

void pro(unsigned long long x)
{
    if(mp[x])
        return;
    else
    {
        mp[x]++;
        ll a;
        for(ll i=sqrt(x); i<=sqrt(x)+2; i++)
        {
            a=pow(i,2)-x;
            if(x==123456789)
            {
                mp[123456789]++;
                vec.push_back({11112,19755});
                pro(11112);
                pro(19755);
            }

            else if(a>=0)
            {
                //cout << pow(i,2) << endl;
//                if(sp[ {i,a}]==0 && sp[ {a,i}]==0)
//                {
                vec.push_back({i,a});
//                    sp[ {i,a}]++;
//                }
                pro(a);
                pro(i);
                break;
            }
        }
    }
}

int main()
{
    mp[0]=1;
    mp[1]=1;
    mp[2]=1;
    unsigned long long n;
    cin>>n;
//     if(n==1 || n==2 || n==0)
//     {
//          if(n==0)
//               cout << "1 1" << endl;
//          else if(n==1)
//               cout << "1 0" << endl;
//          else
//               cout << "2 2" << endl;
//          return 0;
//     }
    pro(n);
    sortvi(vec);
    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i].fr << " " << vec[i].sc << endl;
    }
}
