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
    int q;
    cin>>q;
    com(i,q)
    {
        int n,flag=0;
        cin>>n;
        int a[n];
        com(i,n)
        {
            cin>>a[i];
        }
        dom(i,n-1)
        {
            if (abs(a[i]-a[i-1])==1||(a[i]==1&&a[i-1]==n)||(a[i-1]==1&&a[i]==n))
                flag=0;
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
