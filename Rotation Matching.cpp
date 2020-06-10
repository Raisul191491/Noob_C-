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
int con[200005]= {0},pos[200005]= {0};
int main()
{
    int n,cnt=INT_MIN,x;
    cin>>n;
    vector<int>a,b;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        cin>>x;
        con[x]=i;
        b.push_back(x);
    }
    for(int i=0; i<a.size(); i++)
    {
        x=(con[a[i]]-i);
        if((con[a[i]]-i)<0)
            x+=n;
        pos[x]++;
        //pos[n-abs(con[a[i]]-i)]++;
    }
    com(i,n)
    {
        cnt=max(pos[i],cnt);
    }
    cout << cnt << endl;
}
