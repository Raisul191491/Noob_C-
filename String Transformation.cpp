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
    char x='a',v[26];
    cin>>s;
    com(i,s.length())
    {
        if(x>=s[i] && x<123)
        {
            s[i]=x;
            x++;
        }
        else if(x=='z')
        {
            s[i]=x;
            break;
        }
    }
    if(x==123)
    {
        cout<<s;
    }
    else
        cout << "-1\n";
}
