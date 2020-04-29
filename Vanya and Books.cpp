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
    long long int n,cnt=0,x;
    cin >> n;
    x=log10(n);
    cnt+=n;
    if(n<10)
        cout << cnt << endl;
    else
    {
        com(i,x)
        {
            n-=9*pow(10,i);
            cnt+=n;
        }
        cout << cnt << endl;
    }
}
