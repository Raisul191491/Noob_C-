#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n,sum=0,dis=0;
    cin>>n;
    int a[n];
    com(i,n)
    {
        cin>>a[i];
    }
    sortI(a,n);
    com(i,n)
    {
        if(a[i]>=sum)
        {
            dis++;
            sum+=a[i];
        }
    }
    cout << dis << endl;
}
