#include<bits/stdc++.h>
typedef long long     ll;
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
    int n,pos=0,x=0,y=0,flag=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            x=i;
            break;
        }
    }
    for(int i=n-1; i>0; i--)
    {
        if(a[i]<a[i-1])
        {
            y=i;
            break;
        }
    }
    reverse(a+x,a+y+1);
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
        cout << x+1 << " " << y+1 <<endl;
    }
}
