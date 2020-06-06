#include<bits/stdc++.h>
typedef long long     ll;
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
    int n,odd1=0,eve=0,odd2=0;
    cin>>n;
    int a[n],b[n];
    com(i,n)
    {
        cin>>a[i]>>b[i];
        if(a[i]%2==1)
            odd1++;
        if(b[i]%2==1)
            odd2++;
        if((a[i]%2==1)&&(b[i]%2==1))
            eve++;
    }
    if(n==1 && odd1%2==1 && odd2%2==1)
        cout << "-1\n";
    else if(odd1%2==0 && odd2%2==0)
        cout << "0\n";
    else if(odd1%2==1 && odd2%2==1 && (odd1!=eve||odd2!=eve))
        cout << "1\n";
    else
        cout << "-1\n";
}
