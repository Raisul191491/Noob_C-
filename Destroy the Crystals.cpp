#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
int main()
{
    int n,point=0,cnt=0,mx=INT_MIN;
    cin>>n;
    int pos=n-1;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p;
    cin>>p;
    sort(a,a+n);
    int x=0;
    while(1)
    {
        if(a[x]!=-1 && a[x]<=p)
        {
            p-=a[x];
            a[x]=0;
            cnt++;
            mx=max(mx,cnt);
            x++;
        }
        else
        {
            if(cnt!=0 && a[x]>p && pos>x)
            {
                if(a[pos]!=-1)
                {
                    p+=a[pos];
                    a[pos]=-1;
                    pos--;
                    cnt--;
                }
            }
            else
            {
                 mx=max(cnt,mx);
                 break;
            }
        }
        mx=max(mx,cnt);
    }
    cout << mx << endl;
}
