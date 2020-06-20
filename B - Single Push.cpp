#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
    int t;
    cin>>t;
    com(i,t)
    {
        ll n,mx=0,cnt=-1,dif=0,str=0,beg=0;
        bool flag=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        com(i,n)
        {
            if(a[i]>b[i])
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cout << "NO" << endl;
            continue;
        }
        com(i,n)
        {
            if(a[i]!=b[i])
            {
                dif=b[i]-a[i];
                str=i;
                break;
            }
        }
        for(int j=n-1; j>=0; j--)
        {
            if(a[j]!=b[j])
            {
                beg=j;
                break;
            }
        }
        for(int k=str; k<=beg; k++)
        {
            mx=b[k]-a[k];
            if(mx!=dif)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
