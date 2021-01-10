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
        string s="";
        cin>>n;
        if(n>45)
            cout << -1 << endl;
        else if(n<10)
            cout << n << endl;
        else if(n<20)
        {
            s+="9";
            n-=9;
            if(n>=8)
            {
                s='8'+s;
                n-=8;
            }
            if(n>0)
                cout << n << s << endl;
            else
                cout << s << endl;
        }
        else if(n<=30)
        {
            s+="89";
            n-=17;
            if(n>=7)
            {
                s='7'+s;
                n-=7;
            }
            if(n>0)
                cout << n << s << endl;
            else
                cout << s << endl;
        }
        else if(n<40)
        {
            s+="6789";
            n-=30;
            if(n>=5)
            {
                s='5'+s;
                n-=5;
            }
            if(n>0)
                cout << n << s << endl;
            else
                cout << s << endl;
        }
        else if(n<=45)
        {
            s+="456789";
            n-=39;
            if(n>=3)
            {
                s='3'+s;
                n-=3;
            }
            if(n>=2)
            {
                s='2'+s;
                n-=2;
            }
            if(n>0)
                cout << n << s << endl;
            else
                cout << s << endl;
        }
    }
}
