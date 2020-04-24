#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
#define sortvi(a)   sort(a.begin(),a.end())
#define sortvd(a)   sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        int n,flag=1;
        cin>>n;
        int p[n],c[n];
        com(i,n)
        {
            cin>>p[i]>>c[i];
        }
        if(n==1)
        {
            if(p[0]>=c[0])
                flag=1;
            else
                flag=0;
        }
        else
        {
            if(p[0]<c[0])
                flag=0;
            else
            {
                com(i,n-1)
                {
                    if(p[i+1]<p[i] || c[i]>c[i+1] || (p[i]==p[i+1] && c[i]<c[i+1]) || (p[i+1]-p[i]<c[i+1]-c[i]))
                    {
                        flag=0;
                        break;
                    }
                    else
                        flag=1;
                }
            }
        }
        if(flag==0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
