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
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,flag=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int odd[2]= {0};
        if(a[0]!=b[0])
            flag=1;
        else
        {
            com(i,n)
            {
                if(a[i]>b[i] && odd[0]==0)
                {
                    flag=1;
                    break;
                }
                if(a[i]<b[i] && odd[1]==0)
                {
                    flag=1;
                    break;
                }
                if(a[i]==-1)
                    odd[0]=1;
                if(a[i]==1)
                    odd[1]=1;
            }
        }
        if(flag==0)
            cout << "YES" <<endl;
        else
            cout<< "NO" <<endl;
    }
}
