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
#define pi            3.14159265358979323846264338327950
using namespace std;
map<ll,ll>mp;
int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        double c,h,t,mn=1000006.0,cnt=0.0,temp=0.0,x,fcnt,ave;
        cin>>c>>h>>t;
        ave=(c+h)/2;
        for(int i=0;i<10000;i++)
        {
            if(i%2==0)
            {
                temp+=c;
                cnt++;
                x=temp/cnt;
                if(x>t-ave && x<=t)
                {
                    fcnt=cnt;
                    break;
                }
            }
            else
            {
                temp+=h;
                cnt++;
                x=temp/cnt;
                if(x>t-ave && x<=t)
                {
                    fcnt=cnt;
                    break;
                }
            }
        }
        cout << (int)fcnt << endl;
    }
}
