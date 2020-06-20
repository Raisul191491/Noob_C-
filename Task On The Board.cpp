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
    com(i,t)
    {
        string str;
        cin>>str;
        int m,sum=0;
        cin>>m;
        int a[m],b[m]= {0},c[m]= {0};
        com(i,m)
        {
            cin>>a[i];
        }
        for(int i=0; i<str.length(); i++)
        {
            for(char j=0; j<str.length(); j++)
            {
                if(str[j]>str[i])
                {
                    b[i]+=str[j]-str[i];
                    c[i]=b[i];
                }
            }
        }
        sort(b,b+m);
        int u=0,cnt=str.length()-m;
        //cout << cnt << endl;
        while(cnt--)
        {
                for(int j=0; j<str.length(); j++)
                {
                    if(c[j]==b[u])
                    {
                        str[j]='0';
                        c[j]=-1;
                        u++;
                        break;
                    }
                }
        }
        for(int i=0; i<str.length(); i++)
        {
            if(str[i]!='0')
                cout << str[i];
        }
        cout << endl;
    }
}
