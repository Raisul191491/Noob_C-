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
int main()
{
    int n,pl=0;
    string s;
    cin>>n>>s;
    com(i,s.size())
    {
        if(s[i]=='+')
            pl++;
        else if(pl!=0 && s[i]=='-')
            pl--;
    }
    if(pl<=0)
        cout << "0\n";
    else
        cout << pl << endl;
}
