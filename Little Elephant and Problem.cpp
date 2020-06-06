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
            while(a[x]==a[x-1] && x>0) x--;
            break;
        }
    }
    for(int i=n-1; i>0; i--)
    {
        if(a[i]<a[i-1])
        {
            y=i;
            while(a[y]==a[y+1] && y<n-1) y++;
            break;
        }
    }
    swap(a[x],a[y]);
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            flag=1;
            break;
        }
    }
    //    com(i,n) cout << a[i] << " ";
    if(flag==1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
