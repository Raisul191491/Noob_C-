#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
    string s,a;
    cin>>s>>a;
    if(s.size()!=a.size())
        cout << max(s.size(),a.size());
    else if(s==a)
        cout << "-1\n";
    else
        cout << s.size() <<endl;
}
