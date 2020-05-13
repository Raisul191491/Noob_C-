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
    int a,m,rem,x=50;
    cin>>a>>m;
    int beg=a%m;
    while(x--)
    {
        if(a%m==0)
        {
            cout << "Yes\n";
            return 0;
        }
        int rem=a%m;
        a+=rem;
        if(a%m==beg)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "No\n";
}
