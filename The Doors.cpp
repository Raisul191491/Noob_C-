#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d[n],one=0,zero=0;
    com(i,n)
    {
        cin>>d[i];
        if(d[i]==0)
            zero++;
        else
            one++;
    }
    com(i,n)
    {
        if(d[i]==0)
            zero--;
        else
            one--;
        if(zero==0 || one==0)
        {
            cout << i+1 <<endl;
            break;
        }
    }
}
