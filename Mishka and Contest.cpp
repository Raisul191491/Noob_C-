#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n,k,cnt=0,x;
    cin>>n>>k;
    int a[n];
    com(i,n)
    {
        cin>>a[i];
    }
    com(i,n)
    {
        if(a[i]<=k)
            cnt++;
        else
        {
            x=i;
            break;
        }
    }
    for(int i=n-1;i>=x;i--)
    {
        if(a[i]<=k)
            cnt++;
        else
        {
            x=i;
            break;
        }
    }
    cout << cnt << endl;
}
