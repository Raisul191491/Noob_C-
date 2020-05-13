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
    int r,c,eat=0,sem=0;
    cin>>r>>c;
    char cake[r][c];
    com(i,r)
    {
        com(j,c)
        {
            cin>>cake[i][j];
        }
    }
    com(i,r)
    {
        sem=0;
        com(j,c)
        {
            sem++;
            if(cake[i][j]=='S')
            {
                sem=0;
                break;
            }
        }
        eat+=sem;
        if(sem==c)
        {
            com(j,c)
            {
                cake[i][j]='x';
            }
        }
    }
    com(j,c)
    {
        sem=0;
        com(i,r)
        {
            if(cake[i][j]!='x')
                sem++;
            if(cake[i][j]=='S')
            {
                sem=0;
                break;
            }
        }
        eat+=sem;
    }
    cout << eat << endl;
}
