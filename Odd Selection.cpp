#include<bits/stdc++.h>
typedef long long     ll;
#define fr            first
#define sc            second
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
using namespace std;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        int n,x;
        cin>>n>>x;
        int a[n],odd=0,eve=0;
        com(i,n)
        {
            cin>>a[i];
            if(a[i]%2==0)
                eve++;
            else
                odd++;
        }
        if(x%2==1)
        {
            if(odd>=x)
                cout << "Yes\n";
            else if(odd<x && odd>0)
            {
                x-=odd;
                if(odd%2==0)
                    x++;
                if(x<=eve)
                    cout << "Yes\n";
                else
                    cout << "No\n";
            }
            else
                cout << "No\n";
        }
        else
        {
            if(eve==0 || odd==0)
                cout << "No\n";
            else if((x<n) || (x==n&&eve%2==1&&odd%2==1))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}
