#include<bits/stdc++.h>
#define com(n)    for(int i=0;i<n;i++)
#define dom(n)    for(int j=0;j<n;j++)
#define mom(n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
    long long int n,m,mul,step=0;
    cin>>n>>m;
    if(m%n!=0)
    {
        cout << "-1\n";
        return 0;
    }
    else
        mul=m/n;
    while(mul%2==0)
    {
        step++;
        mul/=2;
    }
    while(mul%3==0)
    {
        step++;
        mul/=3;
    }
    if(mul==1)
        cout << step <<endl;
    else
        cout << "-1\n";
}
