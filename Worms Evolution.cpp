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
    int n;
    cin>>n;
    int a[n];
    com(i,n)
    {
         cin>>a[i];
    }
    com(i,n)
    {
        com(j,n)
        {
            com(k,n)
            {
                if(i!=j && j!=k && i!=k && a[i]==a[j]+a[k])
                {
                    cout << i+1 << " " << j+1 << " " << k+1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << "-1\n";
}
