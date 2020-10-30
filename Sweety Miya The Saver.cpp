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
    bool prim[10001];
    memset(prim, true, sizeof(prim));

    for(int p=2; p*p<=10000; p++)
    {
        if(prim[p]==true)
        {
            for(int i=p*p; i<=10000; i+=p)
                prim[i]=false;
        }
    }

    int t;
    cin>>t;
    com(i,t)
    {
        int n,mx=-1;
        string s;
        cin>>n>>s;
        for(int i=0;i<=3;i++)
        {
             for(int j=0;j<n-i;j++)
             {
                  string k="";
                  for(int ww=j;ww<=j+i;ww++)
                  {
                       k+=s[ww];
                  }
                  int x=0,y=1;
                  mom(z,k.size()-1)
                  {
                       x+=(k[z]-'0')*y;
                       y*=10;
                  }
//                  cout << k << endl;
                  if(prim[x]==true && x<10000)
                    mx=max(mx,x);
             }
        }
        if(mx!=-1)
        cout << "Case " << i+1 << ": "<< mx << endl;
        else
          cout << "Case " << i+1 << ": "<< "This is a junk!" << endl;

    }
}
