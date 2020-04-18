#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n,s,mi=100,flag=0;
    cin>>n>>s;
    com(i,n)
    {
        int x,y;
        cin>>x>>y;
        if(x<s || x==s && y==0)
        {
            if(y>0)
            {
                mi=min(y,mi);
            }
            flag=1;
        }
    }
    if(flag==0)
        cout << "-1\n";
    else
        cout << 100-mi << endl;
}
