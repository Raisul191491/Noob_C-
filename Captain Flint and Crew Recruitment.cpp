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
        if(n<31)
            cout << "NO" << endl;
        else if(n-30==6)
        {
            cout<<"YES"<<endl;
            cout<<5<<" "<<6<<" "<<10<<" "<<15<<endl;
        }
        else if(n-30==14)
        {
            cout<<"YES"<<endl;
            cout<<6<<" "<<7<<" "<<10<<" "<<21<<endl;
        }
        else if(n-30==10)
        {
            cout<<"YES"<<endl;
            cout<<6<<" "<<9<<" "<<15<<" "<<10<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
        }
    }
}
