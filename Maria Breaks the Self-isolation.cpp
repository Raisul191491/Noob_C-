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
    int q;
    cin>>q;
    while(q--)
    {
        int n,x,rem=1;
        cin>>n;
        int a[200005]= {0},pos[n+1];
        dom(i,n)
        {
            cin>>pos[i];
            a[pos[i]]++;
        }
        sort(pos+1,pos+1+n);
        a[0]=1;
        dom(i,200004)
        {
            a[i]+=a[i-1];
        }
        for(int i=n;i>=1;i--)
        {
            if(a[i]-1>=pos[i])
            {
                rem+=i;
                break;
            }
        }
        cout << rem << endl;
    }
}
