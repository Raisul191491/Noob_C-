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
    vector<int>prime;
    int a[101]= {0};
    for(int i=2; i<=100; i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i; j<=100; j+=i)
                a[j]=1;
        }
    }
    for(int i=2; i<=71; i++)
    {
        if(a[i]==0)
        {
            prime.push_back(i);
            if(i*i<100)
                prime.push_back(i*i);
        }
    }
    string s;
    int cnt=0;
    com(i,19)
    {
        cout << prime[i] << endl;
        fflush(stdout);
        cin>>s;
        if(s=="yes")
            cnt++;
    }
    if(cnt>1)
        cout << "composite" << endl;
    else
        cout << "prime" << endl;
    fflush(stdout);
}
