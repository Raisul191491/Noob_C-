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
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        long double l,d,v,g,r,x=0,time=0,div;
        cin>>l>>d>>v>>g>>r;
        time=d/v;
        div=t-round(t/(g+r)*(g+r));
        while(div<0)
            div+=g+r;
        while(div>0)
            div-g+r;
        if(div>g-1e-12)
            t=t-div+g+r;
        time+=(l-d)/v;
        cout << time << endl;
    }
}
