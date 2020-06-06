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
    int n,coin=0;
    cin>>n;
    int a[n];
    com(i,n)
    {
        cin>>a[i];
    }
    if(n==1)
        cout << coin << endl;
    else
    {
        sortI(a,n);
        dom(i,n-1)
        {
            if(a[i]<=a[i-1])
            {
                coin+=(a[i-1]-a[i]+1);
                a[i]+=(a[i-1]-a[i]+1);
            }
        }
        cout << coin << endl;
    }
}
