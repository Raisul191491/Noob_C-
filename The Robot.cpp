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
        string s;
        cin>>s;
        vector<pair<int,int>>pos;
        int x=0,y=0,n=s.length(),f=0;
        com(j,n)
        {
            if(s[j]=='L')
                x--;
            else if(s[j]=='R')
                x++;
            else if(s[j]=='U')
                y++;
            else if(s[j]=='D')
                y--;
            pos.push_back({x,y});
        }
        com(i,pos.size())
        {
            x=0,y=0;
            com(j,n)
            {
                if(s[j]=='L')
                {
                    if(x-1==pos[i].fr && y==pos[i].sc)
                        continue;
                    x--;
                }
                else if(s[j]=='R')
                {
                    if(x+1==pos[i].fr && y==pos[i].sc)
                        continue;
                    x++;
                }
                else if(s[j]=='U')
                {
                    if(x==pos[i].fr && y+1==pos[i].sc)
                        continue;
                    y++;
                }
                else if(s[j]=='D')
                {
                    if(x==pos[i].fr && y-1==pos[i].sc)
                        continue;
                    y--;
                }
            }
            if(x==0 && y==0)
            {
                 cout << pos[i].fr << " " << pos[i].sc << endl;
                 f=1;
                 break;
            }
        }
        if(!f)
          cout << "0 0" << endl;

    }
}
