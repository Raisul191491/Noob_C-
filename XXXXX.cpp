#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x,cnt=INT_MIN,mx=INT_MIN;
        cin>>n>>x;
        int a[n+1]= {0};
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            a[i]+=a[i-1];
        }
        if(a[n]%x!=0)
            cout << n << endl;
        else
        {
            for(int i=n;i>0;i--)
            {
                if(a[i]%x!=0)
                {
                    cnt=i;
                    break;
                }
            }
            mx=max(mx,cnt);
            //cout << mx << endl;
            for(int i=1;i<=n;i++)
            {
                if((a[n]-a[i])%x!=0)
                {
                    cnt=n-i;
                    //cout << a[i] << endl;
                    break;
                }
            }
            mx=max(mx,cnt);
            //cout << mx << endl;
            if(mx==INT_MIN)
                cout << "-1\n";
            else
                cout << mx << endl;
        }
    }
}

