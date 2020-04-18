#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    string s[3];
    com(i,3)
    {
        cin>>s[i];
    }
    if(s[0][0]==s[2][2] && s[0][1]==s[2][1] &&s[0][2]==s[2][0] && s[1][0]==s[1][2])
        cout << "YES\n";
    else
        cout << "NO\n";
}
