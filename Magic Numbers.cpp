#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    string s;
    cin>>s;
    com(i,s.size())
    {
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
            i+=2;
        else if(s[i]=='1' && s[i+1]=='4')
            i++;
        else if(s[i]=='1')
            continue;
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    com(i,s.size())
    {
        if(s[i]!='1')
        {
            if(s[i]!='4')
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
}
