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
map<ll,ll>mp;
int main()
{
     fast
    int n;
    cin>>n;
    int a[n];
    vector<char>pos;
    com(i,n)
    {
        cin>>a[i];
    }
    int sta=0,en=n-1,mn=-1;
    while(sta<=en)
    {
        if(a[sta]>mn && a[en]>mn)
        {
            if(a[sta]<a[en])
            {
                pos.push_back('L');
                mn=a[sta];
                sta++;
            }
            else if(a[en]<a[sta])
            {
                pos.push_back('R');
                mn=a[en];
                en--;
            }
            else
            {
                int cc=1,dd=1;
                while(a[sta]<a[sta+1] && sta<en)
                {
                    cc++;
                    sta++;
                }
                while(a[en]<a[en-1] && en>sta)
                {
                    dd++;
                    en--;
                }
                //cout << cc << ' ' << dd << endl;
                if(cc>dd)
                    while(cc--)
                        pos.push_back('L');
                else
                    while(dd--)
                        pos.push_back('R');
               break;
            }
        }
        else if(a[sta]>mn)
        {
             pos.push_back('L');
             mn=a[sta];
             sta++;
        }
        else if(a[en]>mn)
        {
             pos.push_back('R');
             mn=a[en];
             en--;
        }
        else
          break;
    }
    cout << pos.size() << endl;
    com(i,pos.size()) cout << pos[i];
}
