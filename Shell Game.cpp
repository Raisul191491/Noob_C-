#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int x;
    cin>>x;
    int t=3;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(x==a)
        {
            x=b;
        }
        else if(x==b)
        {
            x=a;
        }

    }
    cout<<x<<endl;
}
