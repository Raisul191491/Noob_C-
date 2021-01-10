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
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        vector<ll>odd,even;
        com(i,n)
        {
            cin>>a[i];
            if(a[i]%2)
                odd.push_back(a[i]);
            else
                even.push_back(a[i]);
        }
        sortvd(odd);
        sortvd(even);
        ll x=0,y=0,beg=1,odd_sum=0,even_sum=0;
        while(x<odd.size() && y<even.size())
        {
            if(beg%2)
            {
                if(odd[x]>even[y])
                    x++;
                else
                {
                    even_sum+=even[y];
                    y++;
                }
                beg++;
            }
            else
            {
                if(odd[x]<even[y])
                    y++;
                else
                {
                    odd_sum+=odd[x];
                    x++;
                }
                beg++;
            }
        }
        while(x<odd.size())
        {
            if(beg%2==0)
            {
                odd_sum+=odd[x];
            }
            x++;
            beg++;
        }
        while(y<even.size())
        {
            if(beg%2)
            {
                even_sum+=even[y];
            }
            y++;
            beg++;
        }
        if(even_sum>odd_sum)
            cout << "Alice" << endl;
        else if(even_sum<odd_sum)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }
}
