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
    int t;
    cin>>t;
    com(i,t)
    {
        int n,one=0,zer=0;
        cin>>n;
        int a[n];
        com(i,n)
        {
            cin>>a[i];
            if(a[i]==1)
                one++;
            else
                zer++;
        }
        if(one==0)
            cout << 0 << endl;
        else if(one==1)
            cout << "-1\n";
        else
        {
            int con,pos,step=0;
            com(i,n)
            {
                if(a[i]==1)
                {
                    int x=i-1,y=i+1,con=1,pos=1;
                    if(x==-1)
                        x=n-1;
                    if(y==n)
                        y=1;
                    while(a[x]==0)
                    {

                        x--;
                        if(x==-1)
                            x=n-1;
                        con++;
                    }
                    while(a[y]==0)
                    {

                        y++;
                        if(y==n)
                            y=1;
                        pos++;
                        if(pos>con) break;
                    }
                    if(con<pos)
                    {
                        a[x]+=a[i];
                        a[i]=0;
                        step+=con;
                    }
                    else
                    {
                        a[y]+=a[i];
                        a[i]=0;
                        step+=pos;
                    }
                }
            }
            //com(i,n) cout << a[i] << " ";
            cout << step << endl;
        }
    }
}
