#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    long long int n,x;
    cin>>n;
    if(n%2!=0)
        cout << "0\n";
    else
    {
        x=pow(2,n/2);
        cout << x << endl;
    }
}
