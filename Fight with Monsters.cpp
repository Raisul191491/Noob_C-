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
    int n,a,b,k,rem,point=0;
    cin>>n>>a>>b>>k;
    multiset<int>cha;
    int mon[n];
    com(i,n)
    {
        cin>>mon[i];
    }
    com(i,n)
    {
        rem=mon[i]%(a+b);
        if(rem==0)
            cha.insert((a+b-1)/a);
        else if(rem>a)
            cha.insert((rem-1)/a);
        else
            point++;
    }
    for(int x:cha)
    {
        if(x<=k)
        {
            point++;
            k-=x;
        }
        else
            break;
    }
    cout << point << endl;
}
