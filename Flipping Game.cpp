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
    int n,one=0,zero=0,mx=-1;
    cin>>n;
    int a[n];
    com(i,n)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            one++;
            if(zero>0)
            {
                zero--;
            }
        }
        else
        {
            zero++;
            mx=max(mx,zero);
        }
    }
    cout << one+mx << endl;
}
