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
        float l,d,v,g,r,x=0,time=0,div;
        cin>>l>>d>>v>>g>>r;
        while(1)
        {
            x+=g*v;
            if(x>=l)
            {
                time+=ceil((l-(x-g*v))/v);
                break;
            }
            time+=g;
            if(x<=d)
            {
                x+=r*v;
                if(x>d)
                    x=d;
                time+=r;
                if(x==d)
                {
                    cout << x << endl;
                    time+=ceil((l-x)/v);
                    break;
                }
            }
        }
        cout << time << endl;
    }
}
