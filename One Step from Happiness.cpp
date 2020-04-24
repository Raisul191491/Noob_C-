#include<bits/stdc++.h>
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;

bool check(int x)
{
    int s1 = 0,s2 = 0;

    for(int i = 0; i < 3; ++i)
    {
        s1+=x%10;
        x/=10;
    }

    for(int i = 0; i < 3; ++i)
    {
        s2+=x%10;
        x/=10;
    }

    return s1==s2;
}

int main()
{
    int n,num1,num2,s1=0,s2=0,s3=0,s4=0;
    cin>>n;
    num1=n+1;
    num2=n-1;
    if(check(num1) || check(num2))
        cout << "Yes\n";
    else
        cout << "No\n";
}
