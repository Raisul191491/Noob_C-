#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c;
        while(a>20 && b>0)
        {
             a=a/2+10;
             b--;
        }
        if(a<=c*10)
          cout<<"YES\n";
        else
          cout << "NO\n";
    }
}
