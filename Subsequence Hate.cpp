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
    while(t--)
    {
        string s;
        cin>>s;
        int one=0,zero=0,cnt=0;
        com(i,s.size())
        {
            if(s[i]=='1')
                one++;
            else
                zero++;
        }
        if(one==0 || zero==0 || s.size()<3)
            cout << "0" << endl;
        else
        {
            cnt=min(one,zero);
            int x=0,y=0,pos=0,con=0;
            for(auto i:s)
            {
                 if(i=='1') pos++;
                 else con++;
                 x=pos+zero-con;
                 y=con+one-pos;
                 cnt=min(min(x,y),cnt);
            }
            cout << cnt << endl;
        }
    }
}
