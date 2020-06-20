#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr            first
#define sc            second
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    int a[n];
    com(i,n)
    {
        cin>>a[i];
    }
    cin.ignore();
    string s;
    com(i,n)
    {
        getline(cin,s);
        int cnt=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='y')
                cnt++;
        }
        if(cnt!=a[i])
        {
            flag=1;

        }
    }
    if(flag)
        cout << "NO\n";
    else
        cout << "YES\n";
}
