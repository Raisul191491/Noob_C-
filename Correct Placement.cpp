#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fr            first
#define sc            second
#define lcm(a,b)      (a*b)/__gcd(a,b)
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
#define endl          '\n'
using namespace std;
int main()
{
    fast
    int t;
    cin>>t;
    com(i,t)
    {
        int n;
        cin>>n;
        ll a[n],b[n],mnh=1e9+20,mnw=1e9+20,pos=-2,mxh=1e9+20,mxw=1e9+20,dos=-2;
        vector<int>v;
        com(i,n)
        {
            cin>>a[i]>>b[i];
            if(a[i]<=mnh && b[i]<=mnw)
            {
                mnh=a[i];
                mnw=b[i];
                pos=i+1;
            }
            else if(a[i]<=mxw && b[i]<=mxh)
            {
                mxw=a[i];
                mxh=b[i];
                dos=i+1;
            }
        }
        com(i,n)
        {
            if((a[i]>mnh && b[i]>mnw))
                v.push_back(pos);
            else if((a[i]>mxw && b[i]>mxh))
                v.push_back(dos);
            else
                v.push_back(-1);
        }
        com(i,v.size()) cout << v[i] << " ";
        cout << endl;
    }
}
