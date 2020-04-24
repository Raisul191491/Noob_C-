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
    int n;
    cin>>n;
    com(i,n)
    {
        string x,y,z;
        int flag;
        cin>>x>>y>>z;
        com(i,x.size())
        {
            if(x[i]==y[i] && y[i]!=z[i])
            {
                flag=1;
                break;
            }
            else if(x[i]==z[i] || y[i]==z[i])
                flag=0;
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
