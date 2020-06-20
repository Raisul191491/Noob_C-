#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,ans;
        cin>>a>>b;
        ans=min({(a+b)/3,a,b,a*b});
        cout << ans << endl;
    }
}
