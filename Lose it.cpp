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
    int n;
    cin>>n;
    int a[50]= {0};
    a[4]=0,a[8]=0,a[15]=0,a[16]=0,a[23]=0,a[42]=0;
    int x;
    com(i,n)
    {
        cin>>x;
        if(x==4)
            a[4]++;
        else if(x==8)
        {
            if(a[4])
                a[4]--, a[8]++;
        }
        else if(x==15)
        {
            if(a[8])
                a[8]--, a[15]++;
        }
        else if(x==16)
        {
            if(a[15])
                a[15]--, a[16]++;
        }
        else if(x==23)
        {
            if(a[16])
                a[16]--, a[23]++;
        }
        else if(x==42)
        {
            if(a[23])
                a[23]--, a[42]++;
        }
    }
    n-=6*a[42];
    cout << n << endl;
}
