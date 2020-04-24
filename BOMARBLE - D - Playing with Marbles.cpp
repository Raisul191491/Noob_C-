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
    int n,x;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        if(n==1)
            cout<< "5" << endl;
        else
        {
            x=5;
            for(int i=2; i<=n; i++)
                x+=(i*3)+1;
            cout << x << endl;
        }
    }
}
