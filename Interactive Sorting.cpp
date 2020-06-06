#include<bits/stdc++.h>
typedef long long     ll;
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
map<ll,ll>mp;
int main()
{
    int n,q;
    cin>>n;
    char a[n];
    char x=65;
    com(i,n) a[i]=x++;
    cin>>q;
    com(i,n)
    {
        com(j,n-1)
        {
            cout << "? " << a[j] << " " << a[j+1] << endl;
            char c;
            cin>>c;
            if(c=='>')
                swap(a[j],a[j+1]);
        }
    }
    cout << "! ";
    com(i,n)
    {
        cout << a[i];
    }
}
