#include<bits/stdc++.h>
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        int n,str=-1,en=n;
        cin>>n;
        int a[n];
        com(i,n)
        {
            cin >>a[i];
        }
        if(n==1)
            cout<<"Yes\n";
        else
        {
            com(i,n)
            {
                if(a[i]<i)
                    break;
                str=i;
            }
            mom(i,n-1)
            {
                if(a[i]<(n-1)-i)
                    break;
                en = i;
            }
            if(en<=str)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
}
