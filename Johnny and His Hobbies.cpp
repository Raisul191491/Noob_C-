#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<ll,ll>mp,np;
        ll n,flag=0;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a,a+n);
        if(n==2)
            cout << abs(a[0]-a[1]) << endl;
        else if(n%2==1)
            cout << "-1\n";
        else
        {
            for(int j=1; j<=1024; j++)
            {
                int cnt=0;
                np.clear();
                for(int i=0; i<n; i++)
                {
                    if(np[a[i]]!=1)
                    {
                        if(mp[a[i]+j]==1 && np[a[i]+j]!=1)
                        {
                            np[a[i]]=1;
                            np[a[i]+j]=1;
                            flag=1;
                        }
                        else
                        {
                             flag=0;
                             break;
                        }
                    }
                }
                if(flag)
                {
                    cout << j << endl;
                    break;
                }
                else
                    flag=0;
            }
            if(flag==0)
                cout << "-1\n";
        }
    }
}
