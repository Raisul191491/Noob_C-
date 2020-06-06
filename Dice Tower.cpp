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
    int n,flag=1;
    cin>>n;
    int x,y,a[n],b[n];
    cin>>x;
    y=7-x;
    com(i,n)
    {
        cin>>a[i]>>b[i];
    }
    com(i,n)
    {
        if(a[i]==x || a[i]==y || b[i]==x || b[i]==y)
        {
            flag=0;
            break;
        }
    }
    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}
