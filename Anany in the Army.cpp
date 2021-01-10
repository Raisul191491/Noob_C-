#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define in(x)         freopen("x","r",stdin);
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
    //freopen("sticks.in","r",stdin);
    int t;
    cin>>t;
    com(i,t)
    {
        map<double,int>mp;
        vector<double>vec(3);
        double s=0.0,k;
        com(i,3)
        {
            cin>>vec[i];
            s+=vec[i];
        }
        cin>>k;
        s/=2;
        double mx=sqrt(s*(s-vec[0])*(s-vec[2])*(s-vec[1]));
        com(i,3)
        {
            double x=vec[i],beg=s;
            if(mp[x])
                continue;
            mp[x]++;
            double sta=0.0,en=min(k,(s*2-x)-x),dig,pre=0.0;
            double mid = (sta+en)/2;
            for(int j=0; j<52; j++)
            {
                //cout << mid << endl;
                beg+=mid/2;
                x+=mid;
                if(i==0)
                    dig=sqrt(beg*(beg-x)*(beg-vec[1])*(beg-vec[2]));
                else if(i==1)
                    dig=sqrt(beg*(beg-vec[0])*(beg-x)*(beg-vec[2]));
                else if(i==2)
                    dig=sqrt(beg*(beg-vec[0])*(beg-vec[1])*(beg-x));
                beg-=mid/2;
                x-=mid;
                if(pre<=dig)
                {
                    pre=max(dig,pre);
                    sta=mid;
                    mid=(sta+en)/2;
                    //cout << mid << endl;
                }
                else
                {
                    en=mid;
                    break;
                }

            }
            //cout << sta << " " << en << endl;
            for(double j=en; j>sta; j-=.0002)
            {
                beg+=(j+sta)/2;
                x+=(j+sta);
                cout << x << endl;
                if(i==0)
                    dig=sqrt(beg*(beg-x)*(beg-vec[1])*(beg-vec[2]));
                else if(i==1)
                    dig=sqrt(beg*(beg-vec[0])*(beg-x)*(beg-vec[2]));
                else if(i==2)
                    dig=sqrt(beg*(beg-vec[0])*(beg-vec[1])*(beg-x));
                if(dig<pre)
                {
                    break;
                }
                else
                {
                    pre=max(pre,dig);
                }

            }
            mx=max(mx,pre);
            mx=max(mx,dig);
        }
        cout << fixed << setprecision(15) << mx << endl;
    }
}
