#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    while(a!=0 && b!=0 && (a>=2*b || b>=2*a))
    {
        if(a>=2*b)
        {
            a%=2*b;
        }
        else if(b>=2*a)
        {
            b%=2*a;
        }
    }
    cout << a << " " << b << endl;
}

