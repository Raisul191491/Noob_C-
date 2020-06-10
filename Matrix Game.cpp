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
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,m,cnt=0,sum=0;
        cin>>n>>m;
        int a[n][m],b[n][m];
        com(i,n)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
                b[i][j]=a[i][j];
                a[i][0]+=a[i][j];
            }
        }
        com(j,m)
        {
            for(int i=0; i<n; i++)
            {
                b[0][j]+=b[i][j];
            }
        }
        for(int i=0; i<n; i++)
        {
            if(a[i][0]==0)
                cnt++;
        }
        for(int j=0; j<m; j++)
        {
            if(b[0][j]==0)
                sum++;
        }
        //cout << sum << " " << cnt << endl;
        cnt=min(cnt,sum);
        if(cnt%2==1)
            cout << "Ashish\n";
        else
            cout << "Vivek\n";
    }
}
