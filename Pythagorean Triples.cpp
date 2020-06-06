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
int main()
{
    ll n;
    cin>>n;
    if(n<3)
        cout << "-1\n";
    else
    {
        n*=n;
        if(n%2)
            cout << (n-1)/2 << " " << (n+1)/2 << endl;
        else
            cout << (n/2-2)/2 << " " << (n/2+2)/2 << endl;
    }
}
