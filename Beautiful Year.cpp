#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin>>n;
    while(1)
    {
        n++;
        a=(n%10);
        b=(n%100)/10;
        c=(n%1000)/100;
        d=(n/1000);
        if (a!=b && a!=c && a!=d && b!=c&& b!=d && c!=d)
            break;
    }
    cout << n <<endl;
}
