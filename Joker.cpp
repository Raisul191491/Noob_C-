#include<bits/stdc++.h>
typedef long long     ll;
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
int main()
{
    int n,x,sits=0,y;
    cin>>n;
    y=n*n+1;
    int a[1000];
    dom(i,y)
    {
        a[i]=1;
    }
    com(i,y-1)
    {
        cin>>x;
        //cout << a[4] << endl;
        if(x<=n || x>=n*(n-1) || x%n==0 || x%n==1)
        {
            a[x]=0;
        }
        else
        {
            int c=0,b=0,p=0,q=0,cnt=INT_MAX;
            for(int j=x/n*n+1; j<x; j++)
            {
                c+=a[j];
                //cout << j << endl;
            }
            cnt=min(c,cnt);
            //cout << c << endl;
            for(int j=x+1; j<=(x/n+1)*n; j++)
            {
                b+=a[j];
            }
            cnt=min(b,cnt);
            //cout << b << endl;
            for(int j=x-n; j>1; j-=n)
            {
                p+=a[j];
            }
            cnt=min(p,cnt);
            //cout << p << endl;
            for(int j=x+n; j<y; j+=n)
            {
                q+=a[j];
            }
            cnt=min(q,cnt);
            //cout << cnt << endl;
            sits+=cnt;
            a[x]=0;
        }
    }
    cout << sits << endl;
}
