#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n,m,z,kill=0,x;
    cin>>n>>m>>z;
    int a[z+z]={0};
    for(int i=1; i<=z; i++)
    {
        x=i*m;
        if(x<=z)
            a[x]++;
    }
    for(int i=1; i<=z; i++)
    {
        x=i*n;
        if(x<=z)
            a[x]++;
    }
    for(int i=1; i<=z; i++)
    {
         if(a[i]==2)
          kill++;
    }
    cout << kill << endl;
}
