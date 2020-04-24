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
    int a,b,cnt=0;
    cin>>a>>b;
    while(a>0 && b>0)
    {
        if(a==1 && b==1)
            break;
        else
        {
            if(a<b)
            {
                a++;
                b-=2;
                cnt++;
            }
            else
            {
                 b++;
                 a-=2;
                 cnt++;
            }
        }
    }
    cout << cnt << endl;
}
