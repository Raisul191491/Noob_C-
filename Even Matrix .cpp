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
        int n,sta=1,beg;
        cin>>n;
        com(i,n)
        {
            if(i%2==0)
            {
                beg=(i+1)*n;
                sta=i*n+1;
                while(sta<=beg)
                    cout << sta++ << " ";
            }
            else
            {
                beg=(i+1)*n;
                sta=i*n;
                while(beg>sta)
                    cout << beg-- << " ";
                sta=(i+1)*n;
            }
            cout << endl;
        }
    }
}
