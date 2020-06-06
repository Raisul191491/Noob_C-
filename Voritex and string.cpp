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
    int t,x=0;
    cin>>t;
    com(i,t)
    {
        string s;
        int cnt=0,l;
        cin>>s;
        l=s.size();
        com(i,l)
        {
            if(s[i]<='z' && s[i]>='a')
            {
                cnt++;
            }
        }
        x+=abs(l-cnt-cnt);
    }
    cout << x << endl;
}
