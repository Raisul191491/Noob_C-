#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=1;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char s[n][m];
    com(i,n)
    {
        com(j,m)
        {
            cin>>s[i][j];
        }
    }
    com(i,n)
    {
        com(j,m-1)
        {
            if(s[i][j]==s[i][j+1] && s[i][j]!=s[i+1][j])
                continue;
            else
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
}
