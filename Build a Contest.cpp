#include<bits/stdc++.h>
typedef long long ll;
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
    int n,m,cnt=0;
    cin>>n>>m;
    int x,bac[n+5]={0};
    set<ll>con;
    com(i,m)
    {
        cin>>x;
        bac[x]++;
        con.insert(x);
        if(con.size()==n)
        {
            cout << "1";
            con.clear();
            dom(j,n)
            {
                 bac[j]--;
                 if(bac[j]>0)
                 {
                      con.insert(j);
                 }
            }
        }
        else
            cout << "0";
    }
}
