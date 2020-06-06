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
    int n;
    cin>>n;
    com(i,n)
    {
        ll str,inp,exp,sum=0,x=0;
        cin>>str>>inp>>exp;
        if(str+exp>inp)
        {
            if(inp>=str)
            {
                exp=exp-(inp-str+1);
                str=inp+1;
            }
            sum=str+exp-inp;
            //cout << str << endl;
            sum=min(exp+1,sum/2+sum%2);
        }
        cout << sum << endl;
    }
}
