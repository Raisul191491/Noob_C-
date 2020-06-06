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
using namespace std;
map<ll,ll>mp;
int main()
{
    int q;
    cin>>q;
    com(i,q)
    {
        int n,y;
        cin>>n;
        int a[200],con[200],pos[200];
        dom(i,n)
        {
            cin>>a[i];
            pos[a[i]]=i;
            con[i]=0;
        }
        y=n-1;
        dom(i,n)
        {
            if(y<=0)
                break;
            for(int j=pos[i]; j>=1; j--)
            {
                if(a[j]<a[j-1] && con[j]==0)
                {
                    swap(a[j],a[j-1]);
                    y--;
                    con[j]=1;
                }
                else
                    break;
            }
        }
        dom(i,n) cout << a[i] << " ";
        cout << endl;
    }
}
