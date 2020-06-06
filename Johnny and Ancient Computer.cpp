#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)
            cout << "0\n";
        else if((a%2==1 && b%2==1) || max(a,b)%2==1 || (max(a,b)/min(a,b))%2!=0)
            cout << "-1\n";
        else
        {
            ll ans=0,cnt=0;
            if(a>b)
            {
                while(b<a)
                {
                    b*=2;
                    ans++;
                }
            }
            else
            {
                while(a<b)
                {
                    a*=2;
                    ans++;
                }
            }

            if(a!=b)
                cout << "-1\n";
            else
            {
                cnt+=ans/3;
                if(ans%3>0)
                    cnt++;
                cout << cnt << endl;
            }
        }
    }
}
