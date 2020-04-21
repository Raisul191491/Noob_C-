#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n,cash=1,c=1;
    cin>>n;
    int a[n],b[n];
    com(i,n)
    {
        cin>>a[i]>>b[i];
    }
    com(i,n-1)
    {
        if(a[i]==a[i+1] && b[i]==b[i+1])
        {
            cash++;
        }
        else
            cash=1;
        c=max(c,cash);
    }
    cout << c << endl;
}
