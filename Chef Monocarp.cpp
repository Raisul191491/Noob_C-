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
    int t;
    cin>>t;
    com(i,t)
    {
        int n;
        cin>>n;
        int a[n],cnt=0;

        map<int,int>mp;
        vector<int>num;

        com(i,n)
        {
            cin>>a[i];
            if(mp[a[i]]==0)
                mp[a[i]]++;
            else
                num.push_back(a[i]);
        }

        com(i,num.size())
        {
            int x=num[i]-1,y=num[i]+1;
            while(1)
            {
                if(x<0)
                    break;
                if(mp[x]==0)
                    break;
                else
                    x--;
            }
            while(1)
            {
                if(mp[y]==0)
                    break;
                else
                    y++;
            }
            if(x==-1)
            {
                cnt+=(y-num[i]);
                mp[y]++;
            }
            else
            {
                cnt+=min(y-num[i],num[i]-x);
                if(y-num[i]<=num[i]-x)
                    mp[y]++;
                else
                    mp[x]++;
            }
        }

        cout << cnt << endl;

    }
}
