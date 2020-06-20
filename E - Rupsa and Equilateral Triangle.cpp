#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
#define pi            3.14159265358979323846264338327950
using namespace std;
const int mx=5000010;
bool a[mx],mp[mx];
int main()
{
    for(int i=2; i*i<mx; i++)
    {
        if(!a[i])
            for(int j=i*i; j<mx; j+=i)
            {
                a[j]=true;
            }
    }
    for(int i=2; i<mx; i++)
    {
        if(!a[i] && i%4==1)
            for(int j=i; j<mx; j+=i)
            {
                mp[j]=true;
            }
    }
    int t;
    scanf("%d",&t);
    com(i,t)
    {
         int n;
         scanf("%d",&n);
         if(!mp[n]) cout << "NO\n";
         else cout << "YES\n";
    }
}
