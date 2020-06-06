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
    int t;
    cin>>t;
    com(i,t)
    {
        int n,k,sta=0,en=0,cnt=0;
        cin>>n>>k;
        vector<int>pos;
        string s,q="";
        cin>>s;
        com(i,n)
        {
            q+="0";
        }
        com(i,n)
        {
            if(s[i]=='1')
            {
                sta=i;
                break;
            }
        }
        mom(i,n-1)
        {
            if(s[i]=='1')
            {
                en=i;
                break;
            }
        }
        if(sta==en)
            cout << cnt << endl;
        else
        {
            for(int i=sta+1; i<=en; i++)
            {
                if((i-sta)%k==0 && s[i]=='0')
                    cnt++;
                else if(((i-sta)%k!=0 && s[i]=='1'))
                {
                    if(s[i]=='1')
                        cnt++;
                }
            }
            cout << cnt << endl;
        }
        //cout << endl;
    }
}
