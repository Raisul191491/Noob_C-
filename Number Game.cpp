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
map<pair<ll,ll>,ll>mp;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        ll n;
        cin>>n;
        if(n==1 || n==4 || n==6)
        {
            cout << "FastestFinger\n";
        }
        else if(n%2 || n==2)
            cout << "Ashishgup\n";
        else if(n%2==0)
        {
            int cnt = 0;
            while(n %2 == 0)
            {
                n/=2;
                cnt++;
            }
            if(n == 1)
                cout<<"FastestFinger\n";
            else if(cnt > 1)
                cout<<"Ashishgup\n";
            else
            {
                int cnt = 0;
                for(int i=3; i*i<=n; i+=2)
                {
                    while(n%i==0)
                    {
                        cnt++;
                        n/=i;
                    }
                }
                if(n!=1)
                    cnt++;
                if(cnt>1)
                    cout<<"Ashishgup\n";
                else
                    cout<<"FastestFinger\n";
            }
        }

    }
}
