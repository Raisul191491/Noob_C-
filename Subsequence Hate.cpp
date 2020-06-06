#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
string s;
void solve()
{
    cin>>s;
    int cnt=0,l=s.size();
    for(int i=1; i<l-1; i++)
    {
        if(s[i]=='1')
            cnt++;
    }
    if(l>2 && s[0]=='1' && s[l-1]=='1')
        cnt++;
    fflush(stdin);
    cout << cnt << endl;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0; i<t; i++)
    {
        solve();
    }
}
