#include<bits/stdc++.h>
typedef long long     ll;
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
     int n,m;
     cin>>n>>m;
     char a[n][m];
     int row[1001]={0},col[1001]={0},wal=0;
     com(i,n)
     {
          com(j,m)
          {
               cin>>a[i][j];
               if(a[i][j]=='*')
               {
                    row[i]++;
                    col[j]++;
                    wal++;
               }
          }
     }
     com(i,n)
     {
          com(j,m)
          {
               if(a[i][j]=='*' && row[i]+col[j]-1==wal || a[i][j]=='.' && row[i]+col[j]==wal)
               {
                    cout << "YES" << endl << i+1 << " " << j+1 << endl;
                    return 0;
               }
          }
     }
     cout << "NO\n";
}
