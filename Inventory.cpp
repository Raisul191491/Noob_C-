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
ll pos[100001]= {0},a[100001]={0};
vector<ll>beg;
int main()
{
    int n,x;
    cin>>n;
    dom(i,n)
    {
        cin>>x;
        if(pos[x]==0  && x<=n)
        {
            a[i]=x;
            pos[x]=1;
        }
    }
    dom(i,n)
    {
        if(pos[i]==0)
            beg.push_back(i);
    }
    int j=0;
    dom(i,n)
    {
         if(a[i]==0)
         {
              cout << beg[j] << " ";
              j++;
         }
         else
          cout << a[i] << " ";
    }
}
