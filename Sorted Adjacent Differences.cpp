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
    int t;
    cin>>t;
    com(i,t)
    {
        int n;
        cin>>n;
        int a[n+1];
        dom(i,n)
        {
            cin>>a[i];
        }
        sort(a+1,a+1+n);
        int x=(n+1)/2;
        a[0]=0;
        com(i,n)
        {
            if(i%2==1)
            {
                cout << a[x+i] << " ";
                x+=i;
            }
            else
            {
                cout << a[x-i] << " ";
                x-=i;
            }
        }
        cout << endl;
    }
}