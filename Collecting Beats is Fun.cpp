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
    int x,z;
    cin>>x;
    int a[10]= {0},b[4][4];
    com(i,4)
    {
        com(j,4)
        {
            char y;
            cin>>y;
            if(y=='.')
                continue;
            else
            {
                z=y-'0';
                a[z]++;
            }
        }
    }
    x*=2;
    com(i,10)
    {
         if(a[i]>x)
         {
              cout << "NO\n";
              return 0;
         }
    }
    cout << "YES\n";
}
