#include<bits/stdc++.h>
typedef long long     ll;
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<ll>kan;
    com(i,n)
    {
        int x;
        cin>>x;
        kan.push_back(x);
    }
    int cnt=n-1;
    sortvi(kan);
    mom(i,n/2-1)
    {
        if(kan[cnt]/2>=kan[i])
        {
            cnt--;
        }
    }
    cout << cnt+1 << endl;
}
