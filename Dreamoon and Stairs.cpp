#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
#define sortvi(a)   sort(a.begin(),a.end())
#define sortvd(a)   sort(a.begin(),a.end(),greater<int>())

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n<m)
    {
        cout << "-1\n";
        return 0;
    }
    for(int i=(n+1)/2; i<=n; i++)
    {
        if(i%m==0)
        {
            cout<< i << endl;
            return 0;
        }
    }
    cout << "-1\n";
}
