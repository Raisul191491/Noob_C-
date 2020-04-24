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
    int a,b,wa=0,wb=0,dr=0;
    cin>>a>>b;
    if(a=b)
    {
         cout << "0 6 0\n";
         return 0;
    }
    if(a<b)
    {
        wa+=a;
        wb+=(7-b);
    }
    else if(b<a)
    {
        wb+=b;
        wa+=(7-a);
    }
    if(abs(b-a)%2==0)
    {
        dr++;
        wa+=(abs(b-a)-1)/2;
        wb+=(abs(b-a)-1)/2;
    }
    else
    {
        wa+=(abs(b-a)-1)/2;
        wb+=(abs(b-a)-1)/2;
    }
    cout << wa << " " << dr << " " << wb << endl;
}
