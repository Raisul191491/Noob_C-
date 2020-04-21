#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n,maxi=0,mini=101,posl,posh,x,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x>maxi)
        {
            maxi=max(maxi,x);
            posh=i;
        }
        if(x<=mini)
        {
            mini= min(mini,x);
            posl=i;
        }
    }
    if(posl<posh)
        cout << (n-posl)+(posh-1)-1 <<endl;
    else
        cout << (n-posl)+(posh-1) <<endl;
}
